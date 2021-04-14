#include <tonc.h>

// === CONSTANTS & STRUCTS ============================================

#define POS0 (80<<8)
#define GRAV 0x40
#define DAMP 0xD0
#define HWLEN 17

const char hwstr[]= "+ Tael Ling Lin +";

typedef struct
{
    u32 state;
    int tt;
    FIXED fy;
    FIXED fvy;
} PATTERN;

// === FUNCTIONS ======================================================

void pat_bounce(PATTERN *pat)
{
    if(pat->tt <= 0)    // timer's run out: play pattern
    {
        pat->fvy += GRAV;
        pat->fy += pat->fvy;

        // touched floor: bounce
        if(pat->fy > POS0)
        {
            // damp if we still have enough speed
            // otherwise kill movement
            if(pat->fvy > DAMP)
            {
                pat->fy= 2*POS0-pat->fy;
                pat->fvy= DAMP-pat->fvy;
            }
            else
            {
                pat->fy= POS0;
                pat->fvy= 0;
            }
        }
    }
    else    // still in waiting period
        pat->tt--;
}

int main()
{
    REG_DISPCNT= DCNT_MODE3 | DCNT_BG2 | DCNT_OBJ;

    irq_init(NULL);
    irq_add(II_VBLANK, NULL);
    memset16(&vid_mem[88*240], CLR_CYAN, 240);

    // (1) init sprite text
    txt_init_std();
    txt_init_obj(&oam_mem[0], 0xF200, CLR_RED, 0xEE);
    // (2) 12 px between letters
    gptxt->dx= 12;

    // (3) init sprite letters
    OBJ_ATTR *oe= oam_mem;
    obj_puts2(120-12*HWLEN/2, 8, hwstr, 0xF200, oe);

    int ii;
    PATTERN pats[HWLEN];

    for(ii=0; ii<HWLEN; ii++)
    {
        // init patterns
        pats[ii].state=0;
        pats[ii].tt= 3*ii+1;
        pats[ii].fy= -12<<8;
        pats[ii].fvy= 0;
        
        // init sprite position
        oe[ii].attr0 &= ~ATTR0_Y_MASK;
        oe[ii].attr0 |= 160;
    }

    while(1)
    {
        VBlankIntrWait();

        for(ii=0; ii<HWLEN; ii++)
        {
            pat_bounce(&pats[ii]);

            oe[ii].attr0 &= ~ATTR0_Y_MASK;
            oe[ii].attr0 |= (pats[ii].fy>>8)& ATTR0_Y_MASK;
        }
    }

    return 0;
}