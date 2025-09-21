#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

#include "read_directory.h"
#include "read_file.h"
#include "concatenate.h"
#include "animate.h"
#include "graf_symbols.h"

//Main struct used throughout
typedef struct banner
{
	//String containing text to be converted
	char * text;
	//Font to use
	char * font;
	//Animation effect to be applied to text
	char * effect;
	//Tick speed of animation
	int speed;
}banner;

#endif //MAIN_H
