#include "banner_init.h"

void banner_init(banner * bp)
{
	bp->rows = malloc(bp->selected_font.char_height * sizeof(unsigned char *));
	for(int i = 0; i < bp->selected_font.char_height; i ++)
	{
		bp->rows[i] = malloc(strlen(bp->text) * bp->selected_font.char_width * sizeof(unsigned char));
	}
	bp->columns = malloc((strlen(bp->text) * bp->selected_font.char_width) * sizeof(unsigned char * ));
	for(int i = 0; i < (strlen(bp->text) * bp->selected_font.char_width); i++)
	{
		bp->columns[i] = malloc(bp->selected_font.char_height * sizeof(unsigned char));
	}
	bp->output = malloc(strlen(bp->text) * bp->selected_font.char_len * sizeof(unsigned char));
}

void banner_free(banner * bp)
{
	free(bp->rows);
	free(bp->columns);
	free(bp->output);
}
