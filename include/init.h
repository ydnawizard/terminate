#ifndef INIT_BANNER_H
#define INIT_BANNER_H
#include "struct_banner.h"
#include "struct_font.h"
#include "font_lookup.h"
#include "font_convert.h"
#include "strip.h"
#include "concatenate.h"
#include <string.h>
#include <stdlib.h>

void banner_init(banner * bp);

void font_init(banner * banner,font ** fslt);

void banner_free(banner * bp);

#endif //INIT_BANNER_H
