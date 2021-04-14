//
// obj_demo.c
// testing various sprite related things
//
// (20031003 - 20060924, Cearn)

#include <string.h>
#include "toolbox.h"
#include "Title_Logo_Spr.h"
#include "Oorta16c.h"

OBJ_ATTR obj_buffer[128];
OBJ_AFFINE *obj_aff_buffer= (OBJ_AFFINE*)obj_buffer;

// testing a few sprite things
// D-pad: move 
// SELECT: switch palette
// START: toggle mapping mode
// A: horizontal flip
// B: vertical flip
// L & R shift starting tile

const int OortaCenterOffsetXY = 16;
u32 oortaAnimationTid= 0;
int oortaAnimFrame = 0;
OBJ_ATTR *OortaSpr= &obj_buffer[0];
int animTicker = 0;

const int oortaWalkFrames[4] = {0,16,32,16};
int oortaDirOffset = 0, oortaLastDirection = -1;

int inputH = 0, inputV = 0;

void OortaTest()
{
	int x= 96, y= 32;
	u32 tid= 0, pb= 0;		// tile id, pal-bank

	obj_set_attr(OortaSpr, 
		ATTR0_SQUARE,				// Square, regular sprite
		ATTR1_SIZE_32,					// 64x64p, 
		ATTR2_PALBANK(pb) | oortaAnimationTid);		// palbank 0, tile 0

	// position sprite
	obj_set_pos(OortaSpr, x-OortaCenterOffsetXY, y-OortaCenterOffsetXY);
/*
	//second sprite?
	OBJ_ATTR *metr2= &obj_buffer[1];
	obj_set_attr(metr2, 
		ATTR0_SQUARE,				// Square, regular sprite
		ATTR1_SIZE_64,					// 64x64p, 
		ATTR2_PALBANK(pb) | (tid+64));		// palbank 0, tile 1

	// position sprite (redundant here; the _real_ position
	// is set further down
	obj_set_pos(metr2, (x+64), y);

	//third sprite?
	OBJ_ATTR *metr3= &obj_buffer[2];
	obj_set_attr(metr3, 
		ATTR0_SQUARE,				// Square, regular sprite
		ATTR1_SIZE_64,					// 64x64p, 
		ATTR2_PALBANK(pb) | (tid+128));		// palbank 0, tile 1

	// position sprite (redundant here; the _real_ position
	// is set further down
	obj_set_pos(metr3, x, (y+64));

	//fourth sprite?
	OBJ_ATTR *metr4= &obj_buffer[3];
	obj_set_attr(metr4, 
		ATTR0_SQUARE,				// Square, regular sprite
		ATTR1_SIZE_64,					// 64x64p, 
		ATTR2_PALBANK(pb) | (tid+192));		// palbank 0, tile 1

	// position sprite (redundant here; the _real_ position
	// is set further down
	obj_set_pos(metr4, (x+64), (y+64));
*/


	while(1)
	{
		vid_vsync();
		key_poll();

		animTicker	++;
		animTicker %= 10;

		//caching inouts
		inputH = key_tri_horz();
		inputV = key_tri_vert();

		x += 2*inputH;// move left/right
		y += 2*inputV;// move up/down

		//direction offset derived from inputs
		if(inputH == -1)oortaDirOffset = (1*48);
		else if(inputH == 1)oortaDirOffset = (2*48);
		//in case of diagonal, vertical overwrites horrizonal
		if(inputV == -1)oortaDirOffset = (3*48);
		else if(inputV == 1)oortaDirOffset = (0);

		//if direction changed, reset animation and switch frame at once
		if(oortaLastDirection != oortaDirOffset)
			animTicker = 0;

		//do animation frame change
		if(animTicker==0)
		{
			oortaAnimFrame++;
			oortaAnimFrame%=4;

			if(inputH+inputV != 0)//if moving, play walk animation
				oortaAnimationTid = oortaWalkFrames[oortaAnimFrame] + oortaDirOffset;
			else//if not moving, "play" stand around "animation" ... frame :P
				{oortaAnimationTid = 16 + oortaDirOffset; oortaLastDirection = -1;}
		}

		//remember last direction for direction chance check
		oortaLastDirection = oortaDirOffset;
/*
		// flip
		if(key_hit(KEY_A))	// horizontally
			metr->attr1 ^= ATTR1_HFLIP;
		if(key_hit(KEY_B))	// vertically
			metr->attr1 ^= ATTR1_VFLIP;
*/

		// Hey look, it's one of them build macros!
		OortaSpr->attr2= ATTR2_BUILD(oortaAnimationTid, pb, 0);
		obj_set_pos(OortaSpr, x-OortaCenterOffsetXY, y-OortaCenterOffsetXY);

		oam_copy(oam_mem, obj_buffer, 1);	// only need to update one
	}
}

int main()
{
	//load Oorta sprite data
	memcpy(&tile_mem[4][0], Oorta16cTiles, Oorta16cTilesLen);
	memcpy(pal_obj_mem, Oorta16cPal, Oorta16cPalLen);

	oam_init(obj_buffer, 128);
	REG_DISPCNT= DCNT_OBJ | DCNT_OBJ_1D;

	OortaTest();

	while(1);

	return 0;
}
