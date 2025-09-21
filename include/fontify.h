#ifndef FONTIFY_H
#define FONTIFY_H

#include <string.h>

#include "banner.h"
#include "font_graffiti.h"

//bp -> banner pointer

//Takes in banner struct and uses the lookup table to
//get the indexes of each character in the text field
void get_indexes(banner * bp);

//Takes in a banner struct pointer, converts string in text field
//to the font specified in font field, and outputs to output field
void fontify(banner * bp);

#endif //FONTIFY_H
