#ifndef ANIMATE_H
#define ANIMATE_H

#include <string.h>
#include <stdlib.h>

#include "banner.h"
#include "font_graffiti.h"

//Scroll row and driver to scroll all rows
void scroll_row_horizontal(banner * bp,int row);
void scroll_horizontal(banner * bp);

void scroll_row_vertical(banner * bp);
void scroll_vertical(banner * bp);

void scroll_individual_horizontal(banner * bp);

void scroll_individual_vertical(banner * bp);

void ripple_vertical(banner * bp);

void ripple_horizontal(banner * bp);


#endif //ANIMATE_H
