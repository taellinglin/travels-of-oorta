
//{{BLOCK(window_tile)

//======================================================================
//
//	window_tile, 24x24@4, 
//	+ palette 16 entries, not compressed
//	+ 10 tiles (t|f|p reduced) not compressed
//	+ regular map (flat), not compressed, 3x3 
//	Total size: 32 + 320 + 18 = 370
//
//	Time-stamp: 2020-09-14, 11:13:55
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.3
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_WINDOW_TILE_H
#define GRIT_WINDOW_TILE_H

#define window_tileTilesLen 320
extern const unsigned short window_tileTiles[160];

#define window_tileMapLen 18
extern const unsigned short window_tileMap[10];

#define window_tilePalLen 32
extern const unsigned short window_tilePal[16];

#endif // GRIT_WINDOW_TILE_H

//}}BLOCK(window_tile)
