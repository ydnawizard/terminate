#ifndef FONT_LOOKUP_H
#define FONT_LOOKUP_H

#include "font_list.h"
#include "struct_banner.h"
#include <string.h>
#include <stdlib.h>


void init_font_struct_lookup_table(font ** fslt);


void font_title_lookup(banner * bp);

void font_lookup(banner * bp);

void font_grab(banner * bp,font ** fslt);


#endif //FONT_LOOKUP_H
