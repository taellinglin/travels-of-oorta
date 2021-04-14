
//{{BLOCK(dialog)

//======================================================================
//
//	dialog, 256x256@4, 
//	+ palette 16 entries, not compressed
//	+ 19 tiles (t|f|p reduced) not compressed
//	+ regular map (flat), not compressed, 32x32 
//	Total size: 32 + 608 + 2048 = 2688
//
//	Time-stamp: 2020-09-24, 00:31:27
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.3
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_DIALOG_H
#define GRIT_DIALOG_H

#define dialogTilesLen 608
extern const unsigned short dialogTiles[304];

#define dialogMapLen 2048
extern const unsigned short dialogMap[1024];

#define dialogPalLen 32
extern const unsigned short dialogPal[16];

#endif // GRIT_DIALOG_H

//}}BLOCK(dialog)
