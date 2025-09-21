#ifndef READ_FILE
#define READ_FILE

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <dirent.h>
#include <string.h>

//Define file contents structure for organized storage
typedef struct text_file_contents
{
	int character_count;
	int string_count;
	int line_count;
	char* characters;
	char** strings;
	char** lines;
}txt;

//Single-character handling
void read_character_to_text_file_contents_pointer(
		txt* text_file_contents_pointer,
		char character,
		int character_index
		);

//String handling
void read_strings_to_text_file_contents_pointer(
		txt* text_file_contents_pointer,
		int* string_index,
		int* string_character_index,
		char character
		);

//Line handler
void read_lines_to_text_file_contents_pointer(
		txt* text_file_contents_pointer,
		int* line_index,
		int* line_character_index,
		char character
		);

//main function
void read_text_file_contents(txt* text_file_contents_pointer,char* file_path);

#endif //READ_FILE
