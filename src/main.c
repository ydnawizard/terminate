/**
 *      ::::::::::: :::::::::: :::::::::    :::   :::   ::::::::::: ::::    :::     ::: ::::::::::: :::::::::: 
 *         :+:     :+:        :+:    :+:  :+:+: :+:+:      :+:     :+:+:   :+:   :+: :+:   :+:     :+:         
 *        +:+     +:+        +:+    +:+ +:+ +:+:+ +:+     +:+     :+:+:+  +:+  +:+   +:+  +:+     +:+          
 *       +#+     +#++:++#   +#++:++#:  +#+  +:+  +#+     +#+     +#+ +:+ +#+ +#++:++#++: +#+     +#++:++#      
 *      +#+     +#+        +#+    +#+ +#+       +#+     +#+     +#+  +#+#+# +#+     +#+ +#+     +#+            
 *     #+#     #+#        #+#    #+# #+#       #+#     #+#     #+#   #+#+# #+#     #+# #+#     #+#             
 *    ###     ########## ###    ### ###       ### ########### ###    #### ###     ### ###     ##########       
 */


//Written by Ellis Weglewski
//ASCII ART is generated at patorjk.com/software/taag/
//Start: 9/12/25
#include "main.h"

void main(int arg_c,char * arg_v)
{
	banner bp;
	bp.text = "ABCABC";
	bp.font_title = "graffiti";
	font * fslt;
	font_lookup_and_init(&bp,&fslt);
	banner_init(&bp);
	convert_text_to_font(&bp);
	//printf("%s\n",graffiti_A);
	strip_newlines(&bp);
	for(int i = 0; i < strlen(bp.text); i++)
	{
		for(int j = 0; j < graffiti_char_len; j++)
		{
			printf("%c",bp.intermediate[i][j]);
		}
		printf("\n");
	}
	concatenate(&bp);
	for(int i = 0; i < strlen(bp.text) * bp.selected_font.char_width; i++)
	{
		printf("%s",bp.columns[i]);
	}
	banner_free(&bp);
}
