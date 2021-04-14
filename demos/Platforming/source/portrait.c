#include <string.h>
#include <maxmod.h>
#include "toolbox.h"
#include "input.h"
#include "blocks.h"
#include "level_map.h"
#include "soundbank.h"
#include "soundbank_bin.h"
#define IRQ_VBLANK 0x001

// Size of your map
#define MapWidth 256
#define MapHeight 128

// Interpret the map as an array of screen entries (16-bit values):
u16 *my_map = (u16*)(level_map_bin);

// Size of a GBA screenblock
#define SbWidth 32
#define SbHeight 32
int map_x = 0;
int map_y = 0;
// change these to load a different part of the map:
int map_offset_x = 0;
int map_offset_y = 0;

// which screenblock to copy to
const int sbb = 30;

void load_map() {
    for (int y = 0; y < SbHeight; y++) {
        for (int x = 0; x < SbWidth; x++) {
            // figure out the coordinates within the map
            map_x = map_offset_x + x;
            map_y = map_offset_y + y;
            
            //se_mem[sbb][x + y*SbWidth] |= SE_PALBANK(0);
            
            /*
            // copy the entries from the map data into the screenblock:
            se_mem[sbb][x + y*SbWidth] = my_map[map_x + map_y * MapWidth];
            */
            se_mem[sbb][x + y*SbWidth] = my_map[map_x + map_y * MapWidth];
        }
    }
}

void background(){
	// Load palette
    memcpy(pal_bg_mem, blocksPal, blocksPalLen);
    // Load tiles into CBB 0
    memcpy(&tile_mem[0][0], blocksTiles, blocksTilesLen);
    // Load map into SBB 30
    //load_map();
    /*
    memcpy(&se_mem[30][0], level1_bin, 32768/2);
	for (int i=0; i<32768/2; i++)
		se_mem[30][i] |= SE_PALBANK(0);

    */
    // set up BG0 for a 4bpp 64x32t map, using
    //   using charblock 0 and screenblock 31
    REG_BG0CNT= BG_CBB(0) | BG_SBB(30) | BG_4BPP | BG_REG_32x32;
}


int main()
{
	irqInit();
	irqSet( IRQ_VBLANK, mmVBlank );
	irqEnable(IRQ_VBLANK);
	mmInitDefault( (mm_addr)soundbank_bin, 28 );
	mmStart( MOD_FORTRESS, MM_PLAY_LOOP );
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

        map_offset_x = x/8;
        map_offset_y = y/8;
        /*
        REG_BG0HOFS= x;
        REG_BG0VOFS= y;
        */
        load_map();
    }

    return 0;
}