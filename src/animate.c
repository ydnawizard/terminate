#include "animate.h"


void scroll_row_horizontal(banner * bp,int row)
{
	int len = strlen(bp->text) * graffiti_width;
	int placeholder = bp->intermediate_rows[row][0];
	for(int i = 0; i < len - 2; i++)
	{
		bp->intermediate_rows[row][i] = 
			bp->intermediate_rows[row][i + 1];
	}
	bp->intermediate_rows[row][len - 2] = placeholder;
}

void scroll_horizontal(banner * bp)
{
	for(int i = 0; i < graffiti_height; i++)
	{
		scroll_row_horizontal(bp,i);
	}
}
