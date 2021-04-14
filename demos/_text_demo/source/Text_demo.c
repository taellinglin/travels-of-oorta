#include <string.h>
#include <stdlib.h>

#include "tonc.h"
#include <maxmod.h>

//sprites
// - no sprites here

//backgrounds
#include "portrait_bg_test.h"
#include "textBox.h"

//music and soundbanks
#include "soundbank.h"
#include "soundbank_bin.h"

#define BgTestLayer 1
void renderBg()
{
	// Load duneFar palette
	memcpy16(pal_bg_mem, portrait_bg_testPal, 256);
	// Load tiles into CBB 0
	memcpy16(&tile_mem[BgTestLayer][0], portrait_bg_testTiles, portrait_bg_testTilesLen*2);
	// Load map into SBB 30
	memcpy16(&se_mem[22][0], portrait_bg_testMap, portrait_bg_testMapLen);
	
	//set all the tiles of that layer to theri palette - not needed for fist layer to render
	//for (int i=0; i<testMapTilesLen; i++)
	//	se_mem[20][i] |= SE_PALBANK(0);

	// set up BG0 for a 4bpp 32x32t map, using charblock 0 and screenblock 22
	REG_BG1CNT= BG_PRIO(1) | BG_CBB(BgTestLayer) | BG_SBB(22) | BG_8BPP | BG_REG_32x32;
}


#define GuiLayer 0
void renderGui()
{
	// Load duneFar palette
	memcpy16(pal_bg_mem+48, textBoxPal, 16);
	// Load tiles into CBB 0
	memcpy16(&tile_mem[GuiLayer][0], textBoxTiles, textBoxTilesLen/2);
	// Load map into SBB 30
	memcpy16(&se_mem[23][0], textBoxMap, textBoxMapLen);
	
	//set all the tiles of that layer to theri palette
	for (int i=0; i<textBoxTilesLen; i++)
		se_mem[23][i] |= SE_PALBANK(3);

	// set up BG0 for a 4bpp 32x32t map, using charblock 0 and screenblock 22
	REG_BG0CNT= BG_PRIO(0) | BG_CBB(GuiLayer) | BG_SBB(23) | BG_4BPP | BG_REG_32x32;

	//position the logo somewhere close the center i guess
	REG_BG0HOFS= -8;
	REG_BG0VOFS= 24;
}

SCR_ENTRY tempSe;

//testDialog
#define MAX_STRING_SIZE 156 //26 chars per 6 rows/lines = 156 chars in total per tesxt box
//fill desired blank spaces with [spaces], line break is not working yet

//charater name - this variable is set in name enter screens or whatever and will replace "*NAME*" in any dialog text
char name[] = "Oorta";

const char Dialogs[][MAX_STRING_SIZE] =
{ 
	//Textbox full of dialog one ->		better description that is searchable would be good here
	"His name is Oorta, he's a frog, sometimes a Dog     ribbit ruff fluff it croakmooooo",
	//Textbox full of dialog two ->		better description that is searchable would be good here
  	"It's some nice text, that might actually be similar to what the game would be needing. I guess...",
	//Textbox full of dialog three ->	better description that is searchable would be good here
  	"Test name replacemnt      His name is *NAME*, yo!",
	//Textbox full of dialog four ->	better description that is searchable would be good here
  	"Last test, press A to loop"
};

// Function to replace a string with another 
// string 
char* replaceWord(const char* s, const char* oldW, 
                  const char* newW) 
{ 
    char* result; 
    int i, cnt = 0; 
    int newWlen = strlen(newW); 
    int oldWlen = strlen(oldW); 
  
    // Counting the number of times old word 
    // occur in the string 
    for (i = 0; s[i] != '\0'; i++) { 
        if (strstr(&s[i], oldW) == &s[i]) { 
            cnt++; 
  
            // Jumping to index after the old word. 
            i += oldWlen - 1; 
        } 
    } 
  
    // Making new string of enough length 
    result = (char*)malloc(i + cnt * (newWlen - oldWlen) + 1); 
  
    i = 0; 
    while (*s) { 
        // compare the substring with the result 
        if (strstr(s, oldW) == s) { 
            strcpy(&result[i], newW); 
            i += newWlen; 
            s += oldWlen; 
        } 
        else
            result[i++] = *s++; 
    } 
  
    result[i] = '\0'; 
    return result; 
}

/*The buffer for the font output*/
char tempString[156];
/*The table for string search*/
const char letters_string[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz,.!?'-:@[]() ";
/*text rendering in textbox*/
#define textStartPos 161 //tile where the fist char is placed
#define lineLenght 26 // chars per row
void renderTextBox(char text[])
{
	//check indices
	int idx, idx2;
	//printing/plottin position
	int curserPos = 0, linePos = 0;

	//blank text box
	for(idx = 0; idx < 156; idx++)
	{
		tempSe = se_mem[23][textStartPos+curserPos];
    	se_mem[23][(textStartPos+curserPos)+(linePos*32)] = (tempSe & ~SE_ID_MASK) | (65);//blank
		curserPos++;
		//shitty line wrap
		if(curserPos == lineLenght)
		{
			curserPos = 0;
			linePos++;
		}
	}

	//reset curser
	curserPos = 0; 
	linePos = 0;
	//write the text
	for(idx = 0; text[idx] != 0x0; idx++)
	{
		if(text[idx] != 0x0)
		for(idx2 = 0; idx2 < 65; idx2++)
		{
			if(text[idx] == letters_string[idx2])
			{
				//pic Character tile based of idx2
				tempSe = se_mem[23][textStartPos+curserPos];
    			se_mem[23][(textStartPos+curserPos)+(linePos*32)] = (tempSe & ~SE_ID_MASK) | (idx2+1);
				
				curserPos++;
				//shitty line wrap
				if(curserPos == lineLenght)
				{
					curserPos = 0;
					linePos++;
				}
			}
		}
		else
		{
			tempSe = se_mem[23][idx];
    		se_mem[23][idx] = (tempSe & ~SE_ID_MASK) | (67);//blank
		}
	}
}

int currentDialog = 0;
int textBoxLayerScroll = 24; // 24 = shown, XX = hidden
bool showHud = true;
void testDialog()
{
	//get inouts for show hode text box
	if(key_hit(KEY_B) && (textBoxLayerScroll == 24 || textBoxLayerScroll == 96))
	{
		showHud = !showHud;
	}
	//hide or show - rolling effect
	if(showHud)
	{
		if(textBoxLayerScroll > 24)
			textBoxLayerScroll	-= 4;
	}
	else
	{
		if(textBoxLayerScroll < 96)
			textBoxLayerScroll	+= 4;
	}
	REG_BG0VOFS = textBoxLayerScroll;

	//cycle through dialogs to be displayed by pressing the A button
	if(key_hit(KEY_A))
	{
		//increase dialog index
		currentDialog++;
		//loop dialog index
		if(currentDialog > 3)
			currentDialog = 0;
	
		//copy dialog text into temporary string thing
		strcpy (tempString,Dialogs[currentDialog]) ;
		//render updated Textbox - use the replacing of names directly
		renderTextBox(replaceWord(tempString, "*NAME*", name));
	}
}

int main()
{
	irqInit();
	irqSet( IRQ_VBLANK, mmVBlank );
	irqEnable(IRQ_VBLANK);

	//music initialisation
    mmInitDefault( (mm_addr)soundbank_bin, 16 );
	// Start playing module
	mmStart( MOD_SHAMISEN, MM_PLAY_LOOP );

	//backgrounds
	renderBg();
	renderGui();

	//test render text
	renderTextBox("Press A to change display Text and press B to show  or hide the Box!");

	//set background flags
	REG_DISPCNT= DCNT_MODE1 | DCNT_BG0 | DCNT_BG1;

	while(1)
	{
		mmFrame(); //play music
		VBlankIntrWait(); //wait for sync
		key_poll(); // get input

		//run updates
		testDialog();
	}

	return 0;
}
