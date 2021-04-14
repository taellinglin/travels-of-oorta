
//{{BLOCK(Sky)

//======================================================================
//
//	sky_alt, 256x160@4, 
//	+ palette 16 entries, not compressed
//	+ 19 tiles (t|f|p reduced) not compressed
//	+ regular map (flat), not compressed, 32x20 
//	Total size: 32 + 608 + 1280 = 1920
//
//	Time-stamp: 2020-09-09, 21:00:02
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.3
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_SKY_H
#define GRIT_SKY_H

#define SkyTilesLen 608
extern const unsigned short SkyTiles[304];

#define SkyMapLen 1280
extern const unsigned short SkyMap[640];

#define SkyPalLen 32
extern const unsigned short SkyPal[16];

#endif // GRIT_SKY_ALT_H

//}}BLOCK(sky_alt)
