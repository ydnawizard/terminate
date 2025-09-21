#ifndef BANNER_H
#define BANNER_H

//Main struct used passed int and out of program
typedef struct banner
{
	//String containing text to be converted
	char * text;
	//Font to use
	char * font;
	//Animation effect to be applied to text
	char * effect;
	//String containing end product
	char * output;
	//Tick speed of animation
	int speed;
}banner;

#endif //BANNER_H
