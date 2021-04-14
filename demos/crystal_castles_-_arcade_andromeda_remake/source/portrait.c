#include <string.h>
#include <maxmod.h>
#include "toolbox.h"
#include "input.h"
#include "portrait_oorta1.h"
#include "stage.h"
#include "dialog.h"
#include "soundbank.h"
#include "soundbank_bin.h"
#define IRQ_VBLANK 0x001
void background(){
	    // Load palette
    memcpy(pal_bg_mem, stagePal, stagePalLen);
    // Load tiles into CBB 0
    memcpy(&tile_mem[0][0], stageTiles, stageTilesLen);
    // Load map into SBB 30
    memcpy(&se_mem[28][0], stageMap, stageMapLen);
	for (int i=0; i<stageTilesLen; i++)
		se_mem[28][i] |= SE_PALBANK(0);

    // set up BG0 for a 4bpp 64x32t map, using
    //   using charblock 0 and screenblock 31
    REG_BG0CNT= BG_CBB(0) | BG_SBB(28) | BG_8BPP | BG_REG_32x32;
}

//Perfect



int main()
{
	irqInit();
	irqSet( IRQ_VBLANK, mmVBlank );
	irqEnable(IRQ_VBLANK);
	mmInitDefault( (mm_addr)soundbank_bin, 28 );
	mmStart( MOD_ARCADE, MM_PLAY_LOOP );
	background();
    REG_DISPCNT= DCNT_MODE0 | DCNT_BG0;

    // Scroll around some
	int diax=0, diay=0;
    int x= 0, y= 0;
    while(1)
    {
		mmFrame();
        vid_vsync();
        key_poll();

        x += key_tri_horz();
        y += key_tri_vert();

    }

    return 0;
}