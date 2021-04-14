
//{{BLOCK(stage)

//======================================================================
//
//	stage, 256x256@8, 
//	+ palette 256 entries, not compressed
//	+ 1024 tiles not compressed
//	+ regular map (flat), not compressed, 32x32 
//	Total size: 512 + 65536 + 2048 = 68096
//
//	Time-stamp: 2021-02-21, 09:29:47
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.3
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_STAGE_H
#define GRIT_STAGE_H

#define stageTilesLen 65536
extern const unsigned short stageTiles[32768];

#define stageMapLen 2048
extern const unsigned short stageMap[1024];

#define stagePalLen 512
extern const unsigned short stagePal[256];

#endif // GRIT_STAGE_H

//}}BLOCK(stage)
