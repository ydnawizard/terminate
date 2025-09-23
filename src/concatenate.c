#include "concatenate.h"


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
		for(int j = j_start ; j < j_start + graffiti_width; j++)
		{
			bp->output[output_index] = bp->intermediate[i][j];
			output_index += 1;
		}
	}
}

void concatenate(banner * bp)
{
	int j_start = 0;
	int row_length = strlen(bp->text) * graffiti_width;
	int row_index = 0;
	strip_newlines(bp);
	bp->intermediate_rows = malloc(graffiti_height * sizeof(unsigned char *));
	bp->output = malloc(strlen(bp->text) * graffiti_char_len * sizeof(unsigned char));
	//Copy to single string
	for(int i = 0; i < graffiti_height; i++)
	{
		concatenate_row(bp,i);
	}
	//Copy to strings as rows
	for(int i = 0; i < graffiti_height; i++)
	{
		bp->intermediate_rows[i] = malloc(row_length * sizeof(unsigned char));
		for(int j = j_start; j <= j_start + row_length; j++)
		{
			if(j == j_start + row_length)
			{
				j_start = j;
				row_index = 0;
				break;
			}
			else
			{
				bp->intermediate_rows[i][row_index] = bp->output[j]; 
				row_index += 1;
			}

		}
	}
		
}
