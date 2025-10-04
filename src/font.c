#include "font.h"

char char_lookup[52] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

void get_char_indexes(banner * bp)
{
	int text_len = strlen(bp->text);
	bp->char_indexes = malloc(text_len * sizeof(int));
	for(int i = 0; i < text_len; i++)
	{
		for(int j = 0; j < 52; j++)
		{
			if(bp->text[i] == char_lookup[j])
			{
				bp->char_indexes[i] = j;
				break;
			}
		}
	}
}

void convert_text_to_font(banner * bp)
{
	get_char_indexes(bp);
	bp->intermediate = malloc(strlen(bp->text) * sizeof(unsigned char *));
	for(int i = 0; i < strlen(bp->text); i++)
	{
		bp->intermediate[i] = malloc(graffiti.char_len * sizeof(unsigned char));
		memcpy(bp->intermediate[i],graffiti.lookup[bp->char_indexes[i]],72 * sizeof(unsigned char));
	}
}
