#include "strip.h"

void strip_newlines(banner * bp)
{
	for(int i = 0; i < strlen(bp->text)-1; i++)
	{
		for(int j = graffiti_width-1; j < graffiti_char_len; j+= graffiti_width)
		{
			bp->intermediate[i][j] = 0x20;
		}
	}
}
