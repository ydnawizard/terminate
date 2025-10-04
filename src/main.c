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
	init_font_struct_lookup_table(&fslt);
	font_title_lookup(&bp);
	memcpy(&bp.selected_font,&fslt[bp.font_index],sizeof(font));
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
}
