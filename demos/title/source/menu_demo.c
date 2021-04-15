#include <string.h>

#include "toolbox.h"
//#include "input.h"

//sprites
#include "TitleText.h"

//backgrounds
#include "Sky.h"
#include "DunesFar.h"
#include "DunesNear.h"
#include "TitleLogo.h"


#define SkyLayer 3
void renderSky()
{
	// Load sky palette
	memcpy16(pal_bg_mem, SkyPal, 16);
	// Load tiles into CBB 0
	memcpy16(&tile_mem[SkyLayer][0], SkyTiles, SkyTilesLen);
	// Load map into SBB 30
	memcpy16(&se_mem[22][0], SkyMap, SkyMapLen);

	// set up BG1 for a 4bpp 32x32t map, using charblock 1 and screenblock 20
	REG_BG3CNT= BG_PRIO(3) | BG_CBB(SkyLayer) | BG_SBB(22) | BG_4BPP | BG_REG_32x32;
}

#define DunesFarLayer 2
void renderDunesFar()
{
	// Load duneFar palette
	memcpy16(pal_bg_mem+16, DunesFarPal, 16);
	// Load tiles into CBB 0
	memcpy16(&tile_mem[DunesFarLayer][0], DunesFarTiles, DunesFarTilesLen);
	// Load map into SBB 30
	memcpy16(&se_mem[19][0], DunesFarMap, DunesFarMapLen);
	
	//set all the tiles of that layer to theri palette
	for (int i=0; i<DunesFarTilesLen; i++)
		se_mem[19][i] |= SE_PALBANK(1);

	// set up BG0 for a 4bpp 32x32t map, using charblock 0 and screenblock 22
	REG_BG2CNT= BG_PRIO(2) | BG_CBB(DunesFarLayer) | BG_SBB(19) | BG_4BPP | BG_REG_32x32;
}

#define DunesNearLayer 1
void renderDunesNear()
{
	// Load duneFar palette
	memcpy16(pal_bg_mem+32, DunesNearPal, 16);
	// Load tiles into CBB 0
	memcpy16(&tile_mem[DunesNearLayer][0], DunesNearTiles, DunesNearTilesLen);
	// Load map into SBB 30
	memcpy16(&se_mem[20][0], DunesNearMap, DunesNearMapLen);
	
	//set all the tiles of that layer to theri palette
	for (int i=0; i<DunesNearTilesLen; i++)
		se_mem[20][i] |= SE_PALBANK(2);

	// set up BG0 for a 4bpp 32x32t map, using charblock 0 and screenblock 22
	REG_BG1CNT= BG_PRIO(1) | BG_CBB(DunesNearLayer) | BG_SBB(20) | BG_4BPP | BG_REG_32x32;
}

#define TitleLogoLayer 0
void renderLogo()
{
	// Load duneFar palette
	memcpy16(pal_bg_mem+48, TitleLogoPal, 16);
	// Load tiles into CBB 0
	memcpy16(&tile_mem[TitleLogoLayer][0], TitleLogoTiles, TitleLogoTilesLen);
	// Load map into SBB 30
	memcpy16(&se_mem[21][0], TitleLogoMap, TitleLogoMapLen);
	
	//set all the tiles of that layer to theri palette
	for (int i=0; i<TitleLogoTilesLen; i++)
		se_mem[21][i] |= SE_PALBANK(3);

	// set up BG0 for a 4bpp 32x32t map, using charblock 0 and screenblock 22
	REG_BG0CNT= BG_PRIO(0) | BG_CBB(TitleLogoLayer) | BG_SBB(21) | BG_4BPP | BG_REG_32x32;

	//position the logo somewhere close the center i guess
	REG_BG0HOFS= -64;
	REG_BG0VOFS= -32;
}

OBJ_ATTR obj_buffer[128];
OBJ_AFFINE *obj_aff_buffer= (OBJ_AFFINE*)obj_buffer;
void renderSrartPrompt()
{
	memcpy16(&tile_mem[4][0], TitleTextTiles, TitleTextTilesLen);
	memcpy16(pal_obj_mem, TitleTextPal, 16);

	oam_init(obj_buffer, 128);

	int x= 80, y= 136;
	u32 tid= 0, pb= 0;		// tile id, pal-bank

	OBJ_ATTR *prompt0 = &obj_buffer[0];
	obj_set_attr(prompt0, ATTR0_SQUARE,	ATTR1_SIZE_8,	ATTR2_PALBANK(pb) | tid);
	obj_set_pos(prompt0, x, y);

	//OBJ_ATTR *prompt1 = &obj_buffer[1];
	obj_set_attr(&obj_buffer[1], ATTR0_SQUARE,	ATTR1_SIZE_8,	ATTR2_PALBANK(pb) | (tid+1));
	obj_set_pos(&obj_buffer[1], x+8, y);

	obj_set_attr(&obj_buffer[2], ATTR0_SQUARE,	ATTR1_SIZE_8,	ATTR2_PALBANK(pb) | (tid+2));
	obj_set_pos(&obj_buffer[2], x+16, y);

	obj_set_attr(&obj_buffer[3], ATTR0_SQUARE,	ATTR1_SIZE_8,	ATTR2_PALBANK(pb) | (tid+3));
	obj_set_pos(&obj_buffer[3], x+24, y);

	obj_set_attr(&obj_buffer[4], ATTR0_SQUARE,	ATTR1_SIZE_8,	ATTR2_PALBANK(pb) | (tid+4));
	obj_set_pos(&obj_buffer[4], x+32, y);
	
	obj_set_attr(&obj_buffer[5], ATTR0_SQUARE,	ATTR1_SIZE_8,	ATTR2_PALBANK(pb) | (tid+5));
	obj_set_pos(&obj_buffer[5], x+40, y);

	obj_set_attr(&obj_buffer[6], ATTR0_SQUARE,	ATTR1_SIZE_8,	ATTR2_PALBANK(pb) | (tid+6));
	obj_set_pos(&obj_buffer[6], x+48, y);

	obj_set_attr(&obj_buffer[7], ATTR0_SQUARE,	ATTR1_SIZE_8,	ATTR2_PALBANK(pb) | (tid+7));
	obj_set_pos(&obj_buffer[7], x+56, y);

	obj_set_attr(&obj_buffer[8], ATTR0_SQUARE,	ATTR1_SIZE_8,	ATTR2_PALBANK(pb) | (tid+8));
	obj_set_pos(&obj_buffer[8], x+64, y);

	obj_set_attr(&obj_buffer[9], ATTR0_SQUARE,	ATTR1_SIZE_8,	ATTR2_PALBANK(pb) | (tid+9));
	obj_set_pos(&obj_buffer[9], x+72, y);

	obj_set_attr(&obj_buffer[10], ATTR0_SQUARE,	ATTR1_SIZE_8,	ATTR2_PALBANK(pb) | (tid+10));
	obj_set_pos(&obj_buffer[10], x+80, y);
	
	//prompt0->attr2= ATTR2_BUILD(tid, pb, 0);
	//prompt1->attr2= ATTR2_BUILD(tid+1, pb, 0);
	//oam_copy(oam_mem, obj_buffer, 4);	// only need to update one
}

//shitty wave for the bobbing logo
const int wave[10]={0,1,3,4,5,5,4,2,1,0};

int main()
{
	//backgrounds
	renderDunesFar();
	renderDunesNear();
	renderLogo();
	renderSky();

	//sprites
	renderSrartPrompt();

	REG_DISPCNT= DCNT_MODE0 | DCNT_BG0 | DCNT_BG1 | DCNT_BG2 | DCNT_BG3 |  DCNT_OBJ | DCNT_OBJ_1D;

	// Scroll around shit and later reuse as much of temporary variables as possible
	int x = 0, x1 = 0, w = 0, wt = 0, temp = 0;
	while(1)
	{
		vid_vsync();//bad one
		//VBlankIntrWait();
		key_poll();

		//tick the ticker
		temp++;temp%=8;

		//stepp the layers kinda rightward 
		if(temp == 3){x++;x1++;}//layer 2 moves every 8 frames
		if(temp == 7){x1++;}//layer 1 moves every 4 frames

		//loop them layers
		x %= 256;x1 %= 256;

		//scrolling them layers, whoosh
		REG_BG1HOFS= x1;

		REG_BG2HOFS= x;

		//put the far away dunes a little higher
		REG_BG2VOFS= 12;
		
		//bobbing logo
		wt++;
		if(wt>12)
		{wt = 0;w++;}
		w%=10;
		REG_BG0VOFS= -32+wave[w];

		//do some sparkles and a "press start" prompt here tomorrow?

		//obj_set_pos(prompt0, x, y);
		oam_copy(oam_mem, obj_buffer, 11);

	}

	return 0;
}
