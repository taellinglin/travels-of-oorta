
//{{BLOCK(textBox)

//======================================================================
//
//	textBox, 256x256@4, 
//	+ palette 16 entries, not compressed
//	+ 82 tiles (t|p reduced) not compressed
//	+ regular map (in SBBs), not compressed, 32x32 
//	Total size: 32 + 2624 + 2048 = 4704
//
//	Time-stamp: 2020-09-27, 16:36:27
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.3
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_TEXTBOX_H
#define GRIT_TEXTBOX_H

#define textBoxTilesLen 2624
extern const unsigned short textBoxTiles[1312];

#define textBoxMapLen 2048
extern const unsigned short textBoxMap[1024];

#define textBoxPalLen 32
extern const unsigned short textBoxPal[16];

#endif // GRIT_TEXTBOX_H

//}}BLOCK(textBox)
