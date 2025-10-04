#include "all_animate.h"

void scroll_horizontal(banner * bp)
{
	for(int i = 0; i < graffiti_height; i++)
	{
		scroll_row_horizontal(bp,i);
	}
}
