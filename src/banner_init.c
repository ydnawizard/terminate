#include "banner_init.h"

void banner_init(banner * bp)
{
	bp->rows = malloc(bp->selected_font.char_height * sizeof(unsigned char *));
	bp->columns = malloc(bp->selected_font.char_width * sizeof(unsigned char * ));
	bp->output = malloc(strlen(bp->text) * bp->selected_font.char_len * sizeof(unsigned char));
}
