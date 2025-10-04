#ifndef STRUCT_FONT_H
#define STRUCT_FONT_H


typedef struct font
{
	int char_len;
	int char_width;
	int char_height;
	unsigned char ** lookup;
}font;

#endif
