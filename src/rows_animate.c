#include "rows_animate.h"

void scroll_row_horizontal(banner * bp,int row)
{
	int len = strlen(bp->text) * graffiti_width;
	int placeholder = bp->rows[row][0];
	for(int i = 0; i < len - 2; i++)
	{
		bp->rows[row][i] = 
			bp->rows[row][i + 1];
	}
	bp->rows[row][len - 2] = placeholder;
}


