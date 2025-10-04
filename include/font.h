#ifndef FONTIFY_H
#define FONTIFY_H

#include <string.h>


#include "struct_banner.h"
#include "struct_font.h"
#include "font_list.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//Takes in banner struct and uses the lookup table to
//get the indexes of each character in the text field
void get_char_indexes(banner * bp);

//Takes in a banner struct pointer, converts string in text field
//to the font specified in font field, and outputs to output field
void convert_text_to_font(banner * bp,font * fslt);

#endif //FONTIFY_H
