#include "concatenate.h"

#include <stdlib.h>
#include <string.h>

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

void concatenate_row(banner * bp,int row)
{
	int j_start,
	    output_index;
	if(row > 0)
	{ 
		j_start = (row * (graffiti_width-1)) + 1;
		output_index = (row * (strlen(bp->text) * (graffiti_width - 1))) + 1;
	}
	else
	{
		j_start = 0;
		output_index = 0;
	}
	for(int i = 0; i < strlen(bp->text); i++)
	{
		for(int j = j_start ; j < j_start + graffiti_width; j++)
		{
			bp->output[output_index] = bp->intermediate[i][j];
			output_index += 1;
		}
	}
}

void concatenate(banner * bp)
{
	strip_newlines(bp);
	bp->output = malloc(strlen(bp->text) * graffiti_char_len * sizeof(unsigned char));
	for(int i = 0; i < graffiti_height; i++)
	{
		concatenate_row(bp,i);
	}
}

