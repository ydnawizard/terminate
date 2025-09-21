#include "animate.h"


void scroll_row_horizontal(banner * bp,int row)
{
	int row_length = strlen(bp->text)*graffiti_width;
	int j_start,
	    output_index;
	if(row > 0)
	{ 
		j_start = (row * row_length)+1;
		output_index = (row * row_length);
	}
	else
	{
		j_start = 1;
		output_index = 0;
	}
	unsigned char placeholder = bp->output[output_index];
	for(int j = j_start ; j < j_start + row_length; j++)
	{
		if(j == (j_start + row_length - 1))
		{
			bp->output[output_index] = placeholder;
			output_index += 1;
		}
		else
		{
			bp->output[output_index] = bp->output[j];
			output_index += 1;
		}
	}
}

void scroll_horizontal(banner * bp)
{
	for(int i = 0; i < graffiti_height; i++)
	{
		scroll_row_horizontal(bp,i);
	}
}
