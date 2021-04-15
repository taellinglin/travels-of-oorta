
//{{BLOCK(Sky)

//======================================================================
//
//	Sky, 256x256@4, 
//	+ palette 16 entries, not compressed
//	+ 574 tiles (t|f|p reduced) not compressed
//	+ regular map (in SBBs), not compressed, 32x32 
//	Total size: 32 + 18368 + 2048 = 20448
//
//	Time-stamp: 2020-09-13, 19:31:19
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.3
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_Sky_H
#define GRIT_Sky_H

#define SkyTilesLen 18368
extern const unsigned short SkyTiles[9184];

#define SkyMapLen 2048
extern const unsigned short SkyMap[1024];

#define SkyPalLen 32
extern const unsigned short SkyPal[16];

#endif // GRIT_Sky_H

//}}BLOCK(Sky)
