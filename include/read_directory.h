#ifndef READ_DIRECTORY_H
#define READ_DIRECTORY_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <dirent.h>
#include <string.h>

//Define directory contents struct
typedef struct directory_contents
{
	int file_count;
	int sub_directory_count;
	char** file_names;
	char** sub_directory_names;
}directory_contents;


//Read directory contents into directory contents struct
void read_directory_contents(
		directory_contents* directory_contents_pointer,
		char* directory_path);

#endif //READ_DIRECTORY_H
