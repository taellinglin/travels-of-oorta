#include <string.h>
#include <maxmod.h>
#include "toolbox.h"
#include "input.h"
#include "portrait_oorta1.h"
#include "background.h"
#include "dialog.h"
#include "soundbank.h"
#include "soundbank_bin.h"
#define IRQ_VBLANK 0x001
void background(){
	    // Load palette
    memcpy(pal_bg_mem, backgroundPal, backgroundPalLen);
    // Load tiles into CBB 0
    memcpy(&tile_mem[0][0], backgroundTiles, backgroundTilesLen);
    // Load map into SBB 30
    memcpy(&se_mem[28][0], backgroundMap, backgroundMapLen);
	for (int i=0; i<backgroundTilesLen; i++)
		se_mem[28][i] |= SE_PALBANK(0);

    // set up BG0 for a 4bpp 64x32t map, using
    //   using charblock 0 and screenblock 31
    REG_BG3CNT= BG_CBB(0) | BG_SBB(28) | BG_4BPP | BG_REG_32x32;
}

//Perfect
void portrait(){
	    // Load palette
    memcpy(pal_bg_mem+16, portrait_oortaPal, portrait_oortaPalLen);
    // Load tiles into CBB 0
    memcpy(&tile_mem[2][0], portrait_oortaTiles, portrait_oortaTilesLen);
    // Load map into SBB 30
    memcpy(&se_mem[30][0], portrait_oortaMap, portrait_oortaMapLen);
	for (int i=0; i<backgroundTilesLen; i++)
		se_mem[30][i] |= SE_PALBANK(1);
    // set up BG0 for a 4bpp 64x32t map, using
    //   using charblock 0 and screenblock 31
    REG_BG2CNT= BG_CBB(2) | BG_SBB(30) | BG_4BPP | BG_REG_32x32;
}

void dialog(){
	    // Load palette
    memcpy(pal_bg_mem+32, dialogPal, dialogPalLen);
    // Load tiles into CBB 0
    memcpy(&tile_mem[3][0], dialogTiles, dialogTilesLen);
    // Load map into SBB 30
    memcpy(&se_mem[31][0], dialogMap, dialogMapLen);

  	for (int i=0; i<backgroundTilesLen; i++)
		se_mem[31][i] |= SE_PALBANK(2);

    REG_BG1CNT= BG_PRIO(0) | BG_CBB(3) | BG_SBB(31) | BG_4BPP | BG_REG_32x32;
}
int main()
{
	irqInit();
	irqSet( IRQ_VBLANK, mmVBlank );
	irqEnable(IRQ_VBLANK);
	mmInitDefault( (mm_addr)soundbank_bin, 28 );
	mmStart( MOD_BGM01, MM_PLAY_LOOP );
	background();
	portrait();
	dialog();
    REG_DISPCNT= DCNT_MODE0 | DCNT_BG1 | DCNT_BG2 | DCNT_BG3;

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

        REG_BG0HOFS= x;
        REG_BG0VOFS= y;
    }

    return 0;
}