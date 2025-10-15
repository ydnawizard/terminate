#include "animate.h"


void scroll_horizontal_left(banner * bp)
{
	for(int row = 0;row < bp->selected_font.char_height; row++)
	{
		int len = strlen(bp->text) * bp->selected_font.char_width;
		int placeholder = bp->rows[row][0];
		for(int i = 0; i < len - 2; i++)
		{
			bp->rows[row][i] = 
				bp->rows[row][i + 1];
		}
		bp->rows[row][len - 2] = placeholder;
	}
	concatenate_rows_to_output(bp);
}
