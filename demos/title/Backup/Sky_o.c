
//{{BLOCK(sky_alt)

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

const unsigned short SkyTiles[304] __attribute__((aligned(4)))=
{
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,
	0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,
	0xDDDD,0xDDDD,0xCDCD,0xCDCD,0xDCDC,0xDCDC,0xCDCD,0xCDCD,
	0xDCDC,0xDCDC,0xCDCD,0xCDCD,0xDCDC,0xDCDC,0xCDCD,0xCDCD,
	0xCBCB,0xCBCB,0xBCBC,0xBCBC,0xCBCB,0xCBCB,0xBCBC,0xBCBC,
	0xCBCB,0xCBCB,0xBCBC,0xBCBC,0xCACA,0xCACA,0xACAC,0xACAC,

	0xCACA,0xCACA,0xACAC,0xACAC,0xCACA,0xCACA,0xAAAA,0xAAAA,
	0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0x9A9A,0x9A9A,
	0xCACA,0xCACA,0xACAC,0xACAC,0xCACA,0xCACA,0xABAB,0xABAB,
	0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0x9A9A,0x9A9A,
	0xA9A9,0xA9A9,0x9A9A,0x9A9A,0xA9A9,0xA9A9,0x9999,0x9999,
	0x9898,0x9898,0x8989,0x8989,0x9898,0x9898,0x8989,0x8989,
	0x9898,0x9898,0x8989,0x8989,0x9898,0x9898,0x8989,0x8989,
	0x9797,0x9797,0x7979,0x7979,0x8787,0x8787,0x7878,0x7878,

	0x8787,0x8787,0x7878,0x7878,0x8787,0x8787,0x7777,0x7777,
	0x7777,0x7777,0x6767,0x6767,0x7676,0x7676,0x6767,0x6767,
	0x8787,0x8787,0x7878,0x7878,0x8787,0x8787,0x7777,0x7777,
	0x7676,0x7676,0x6767,0x6767,0x7676,0x7676,0x6767,0x6767,
	0x7676,0x7676,0x6767,0x6767,0x7575,0x7575,0x5757,0x5757,
	0x6565,0x6565,0x5656,0x5656,0x6565,0x6565,0x5555,0x5555,
	0x7676,0x7676,0x6767,0x6767,0x7575,0x7575,0x5656,0x5656,
	0x6565,0x6565,0x5656,0x5656,0x6565,0x6565,0x5555,0x5555,

	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x4545,0x4545,0x5454,0x5454,0x4545,0x4545,
	0x5454,0x5454,0x4444,0x4444,0x4343,0x4343,0x3434,0x3434,
	0x4343,0x4343,0x3434,0x3434,0x4343,0x4343,0x3434,0x3434,
	0x4343,0x4343,0x2424,0x2424,0x3232,0x3232,0x2323,0x2323,
	0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,
	0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,
	0x2222,0x2222,0x1212,0x1212,0x2020,0x2020,0x0101,0x0101,

	0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,
	0x2222,0x2222,0x1212,0x1212,0x2020,0x2020,0x0202,0x0202,
	0x1010,0x1010,0x0101,0x0101,0x1010,0x1010,0x0101,0x0101,
	0x1010,0x1010,0x0101,0x0101,0x1010,0x1010,0x0101,0x0101,
	0x1010,0x1010,0x0101,0x0101,0x1010,0x1010,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
};

const unsigned short SkyMap[640] __attribute__((aligned(4)))=
{
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,
	0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,
	0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,
	0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,

	0x0003,0x0003,0x0003,0x0003,0x0003,0x0003,0x0003,0x0003,
	0x0003,0x0003,0x0003,0x0003,0x0003,0x0003,0x0003,0x0003,
	0x0003,0x0003,0x0003,0x0003,0x0003,0x0003,0x0003,0x0003,
	0x0003,0x0003,0x0003,0x0003,0x0003,0x0003,0x0003,0x0003,
	0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,
	0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,
	0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,
	0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,

	0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,
	0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,
	0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,
	0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,
	0x0007,0x0007,0x0007,0x0007,0x0007,0x0007,0x0007,0x0007,
	0x0007,0x0007,0x0007,0x0007,0x0007,0x0007,0x0007,0x0007,
	0x0007,0x0007,0x0007,0x0007,0x0007,0x0007,0x0007,0x0007,
	0x0007,0x0007,0x0007,0x0007,0x0007,0x0007,0x0007,0x0007,

	0x0008,0x0008,0x0008,0x0008,0x0008,0x0008,0x0008,0x0008,
	0x0008,0x0008,0x0008,0x0008,0x0008,0x0008,0x0008,0x0009,
	0x0009,0x0009,0x0009,0x0009,0x0009,0x0009,0x0009,0x0009,
	0x0009,0x0009,0x0009,0x0009,0x0009,0x0009,0x0009,0x0009,
	0x000A,0x000A,0x000A,0x000A,0x000A,0x000A,0x000A,0x000A,
	0x000A,0x000A,0x000A,0x000A,0x000A,0x000A,0x000A,0x000B,
	0x000B,0x000B,0x000B,0x000B,0x000B,0x000B,0x000B,0x000B,
	0x000B,0x000B,0x000B,0x000B,0x000B,0x000B,0x000B,0x000B,

	0x000C,0x000C,0x000C,0x000C,0x000C,0x000C,0x000C,0x000C,
	0x000C,0x000C,0x000C,0x000C,0x000C,0x000C,0x000C,0x000C,
	0x000C,0x000C,0x000C,0x000C,0x000C,0x000C,0x000C,0x000C,
	0x000C,0x000C,0x000C,0x000C,0x000C,0x000C,0x000C,0x000C,
	0x000D,0x000D,0x000D,0x000D,0x000D,0x000D,0x000D,0x000D,
	0x000D,0x000D,0x000D,0x000D,0x000D,0x000D,0x000D,0x000D,
	0x000D,0x000D,0x000D,0x000D,0x000D,0x000D,0x000D,0x000D,
	0x000D,0x000D,0x000D,0x000D,0x000D,0x000D,0x000D,0x000D,

	0x000E,0x000E,0x000E,0x000E,0x000E,0x000E,0x000E,0x000E,
	0x000E,0x000E,0x000E,0x000E,0x000E,0x000E,0x000E,0x000E,
	0x000E,0x000E,0x000E,0x000E,0x000E,0x000E,0x000E,0x000E,
	0x000E,0x000E,0x000E,0x000E,0x000E,0x000E,0x000E,0x000E,
	0x000F,0x000F,0x000F,0x000F,0x000F,0x000F,0x000F,0x000F,
	0x000F,0x000F,0x000F,0x000F,0x000F,0x000F,0x000F,0x000F,
	0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,
	0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,

	0x0011,0x0011,0x0011,0x0011,0x0011,0x0011,0x0011,0x0011,
	0x0011,0x0011,0x0011,0x0011,0x0011,0x0011,0x0011,0x0011,
	0x0011,0x0011,0x0011,0x0011,0x0011,0x0011,0x0011,0x0011,
	0x0011,0x0011,0x0011,0x0011,0x0011,0x0011,0x0011,0x0011,
	0x0012,0x0012,0x0012,0x0012,0x0012,0x0012,0x0012,0x0012,
	0x0012,0x0012,0x0012,0x0012,0x0012,0x0012,0x0012,0x0012,
	0x0012,0x0012,0x0012,0x0012,0x0012,0x0012,0x0012,0x0012,
	0x0012,0x0012,0x0012,0x0012,0x0012,0x0012,0x0012,0x0012,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
};

const unsigned short SkyPal[16] __attribute__((aligned(4)))=
{
	0x76BC,0x769C,0x769B,0x769A,0x767A,0x7679,0x7A79,0x7A58,
	0x7A57,0x7A37,0x7A36,0x7A35,0x7A15,0x7A14,0x0001,0x0001,
};

//}}BLOCK(sky_alt)
