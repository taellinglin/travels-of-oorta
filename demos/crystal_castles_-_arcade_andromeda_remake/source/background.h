
//{{BLOCK(background)

//======================================================================
//
//	background, 256x256@4, 
//	+ palette 16 entries, not compressed
//	+ 541 tiles (t|f|p reduced) not compressed
//	+ regular map (flat), not compressed, 32x32 
//	Total size: 32 + 17312 + 2048 = 19392
//
//	Time-stamp: 2020-09-25, 21:40:45
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.3
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_BACKGROUND_H
#define GRIT_BACKGROUND_H

#define backgroundTilesLen 17312
extern const unsigned short backgroundTiles[8656];

#define backgroundMapLen 2048
extern const unsigned short backgroundMap[1024];

#define backgroundPalLen 32
extern const unsigned short backgroundPal[16];

#endif // GRIT_BACKGROUND_H

//}}BLOCK(background)
