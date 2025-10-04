#ifndef BANNER_H
#define BANNER_H

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
	//Animation effect to be applied to text
	char * effect;
	//Tick speed of animation
	int speed;
	//Strings containing fontified letters
	char ** intermediate;
	//Strings containing each row
	char ** rows;
	//Strings containing each column
	char ** columns;
	//String containing end product
	char * output;
	
}banner;


void init_banner(banner * bp);

#endif //BANNER_H
