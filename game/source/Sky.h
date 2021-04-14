
//{{BLOCK(Sky)

//======================================================================
//
//	Sky, 256x256@4, 
//	+ palette 16 entries, not compressed
//	+ 1024 tiles not compressed
//	+ regular map (flat), not compressed, 32x32 
//	Total size: 32 + 32768 + 2048 = 34848
//
//	Time-stamp: 2020-09-13, 08:11:23
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.3
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_SKY_H
#define GRIT_SKY_H

#define SkyTilesLen 32768
extern const unsigned short SkyTiles[16384];

#define SkyMapLen 2048
extern const unsigned short SkyMap[1024];

#define SkyPalLen 32
extern const unsigned short SkyPal[16];

#endif // GRIT_SKY_H

//}}BLOCK(Sky)
