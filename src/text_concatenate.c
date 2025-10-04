#include "text_concatenate.h"

/*
void concatenate_to_output(banner * bp,int row)
{
	int j_start,
	    output_index;
	if(row > 0)
	{ 
		j_start = (row * (graffiti_width));
		output_index = (row * (strlen(bp->text) * (graffiti_width)));
	}
	else
	{
		j_start = 0;
		output_index = 0;
	}
	for(int i = 0; i < strlen(bp->text); i++)
	{
		for(int j = j_start ; j < (j_start + graffiti_width); j++)
		{
			bp->output[output_index] = bp->intermediate[i][j];
			output_index += 1;
		}
	}
}

void text_concatenate(banner * bp)
{
	int j_start = 0;
	int row_length = strlen(bp->text) * graffiti_width;
	int row_index = 0;
	strip_newlines(bp);
	bp->rows = malloc(graffiti_height * sizeof(unsigned char *));
	bp->output = malloc(strlen(bp->text) * graffiti_char_len * sizeof(unsigned char));
	//Copy to single string
	for(int i = 0; i < graffiti_height; i++)
	{
		concatenate_to_output(bp,i);
	}
}

*/
