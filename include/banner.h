#ifndef BANNER_H
#define BANNER_H

//Main struct used passed int and out of program
typedef struct banner
{
	//String containing text to be converted
	char * text;
	//Intermediary helper field for fontify
	//Connects index lookup to font lookup
	int * indexes;
	//Font to use
	char * font;
	//Animation effect to be applied to text
	char * effect;
	//Tick speed of animation
	int speed;
	//Strings containing fontified letters
	char ** intermediate;
	//
	char ** intermediate_rows;
	//String containing end product
	char * output;
	
}banner;

#endif //BANNER_H
