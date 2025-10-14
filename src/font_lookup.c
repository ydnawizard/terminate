#include "font_lookup.h"

char * font_title_lookup_table[1] = {"graffiti"};

int font_count = 1;

void init_font_struct_lookup_table(font ** fslt)
{
	(*fslt) = malloc(font_count * sizeof(font));
	(*fslt)[0] = graffiti;
}


void font_title_lookup(banner * bp)
{
	for(int i = 0; i < font_count; i++)
	{
		if(strcmp(bp->font_title,font_title_lookup_table[i])
				== 0)
		{
			bp->font_index = i;
		}
	}
}

void font_init(banner * bp,font ** fslt)
{
	memcpy(&bp->selected_font,fslt[bp->font_index],sizeof(font));
}

void font_lookup_and_init(banner * bp,font ** fslt)
{
	init_font_struct_lookup_table(fslt);
	font_title_lookup(bp);
	font_init(bp,fslt);
}
