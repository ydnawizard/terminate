#ifndef BANNER_H
#define BANNER_H
#include "struct_font.h"

//Main struct used passed int and out of program
typedef struct banner
{
	//String containing text to be converted
	char * text;
	//Intermediary helper field for font
	int * char_indexes;
	//Font to use (string form)
	char * font_title;
	//Font to use (index in font lookup)
	int font_index;
	//Font struct
	font selected_font;
	//Animation effect to be applied to text
	char * effect;
	//Tick speed of animation
	int speed;
	//Strings containing fontified letters
	unsigned char ** intermediate;
	//Strings containing each row
	unsigned char ** rows;
	//Strings containing each column
	unsigned char ** columns;
	//String containing end product
	unsigned char * output;
	
}banner;


#endif //BANNER_H
