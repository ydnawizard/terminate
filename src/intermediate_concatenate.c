#include "intermediate_concatenate.h"


void concatenate_to_rows(banner * bp)
{
	int row_len = strlen(bp->text) * bp->selected_font.char_width;
	int intr_index,
	    intr_char_index;
	for(int row = 0; row < bp->selected_font.char_height; row++)
	{
		intr_index = 0;
		intr_char_index = row * bp->selected_font.char_width;
		for(int char_index = 0; char_index < row_len; char_index++)
		{
			bp->rows[row][char_index] = bp->intermediate[intr_index][intr_char_index];
			if((intr_char_index + 1) / ((row + 1) * bp->selected_font.char_width) == 1)
			{
				intr_index += 1;
				intr_char_index = row * bp->selected_font.char_width; 
			}
			else
			{
				intr_char_index += 1;
			}
		}
	}
}

void concatenate_to_columns(banner * bp)
{
	int intr_index = 0,
	    intr_char_index = 0;
	for(int column = 0; column < (strlen(bp->text) * bp->selected_font.char_width); column++)
	{
		printf("%s %d \n","column:",column);
		if(column != 0 & (column % bp->selected_font.char_width) == 0)
		{
			intr_index += 1;
			intr_char_index = 0;
		}
		else
		{
			intr_char_index = column % (bp->selected_font.char_width);
		}
		for(int char_index = 0; char_index < bp->selected_font.char_height; char_index++)
		{
			printf("%d ",intr_index);
			printf("%d\n",intr_char_index);
			printf("%s %d\n","index:",char_index);
			bp->columns[column][char_index] = bp->intermediate[intr_index][intr_char_index];
			printf("%s\n","made it");
			intr_char_index += bp->selected_font.char_width;
		}
	}
}

void concatenate_to_output(banner * bp)
{
	int k_start,
	    output_index;
	for(int row = 0; row < graffiti_height; row++)
	{
		if(row > 0)
		{ 
			k_start = (row * (graffiti_width));
			output_index = (row * (strlen(bp->text) * (graffiti_width)));
		}
		else
		{
			k_start = 0;
			output_index = 0;
		}
		for(int j = 0; j < strlen(bp->text); j++)
		{
			for(int k = k_start ; k < (k_start + graffiti_width); k++)
			{
				bp->output[output_index] = bp->intermediate[j][k];
				output_index += 1;
			}
		}
	}
}

void concatenate(banner * bp)
{
	concatenate_to_rows(bp);
	concatenate_to_columns(bp);
	concatenate_to_output(bp);
}

