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
	fontify(&bp);
	//printf("%s\n",graffiti_A);
	strip_newlines(&bp);
	concatenate(&bp);
	for(int i = 0; i < graffiti_height; i++)
	{
		for(int j = 0; j < strlen(bp.text) * graffiti_width; j++)
		{
			printf("%c",bp.intermediate_rows[i][j]);
		}
	}
	int ctrl = 1;
	while(ctrl)
	{
		scroll_horizontal(&bp);
		for(int i = 0; i < graffiti_height; i++)
		{
			for(int j = 0; j < strlen(bp.text) * graffiti_width; j++)
			{
				printf("%c",bp.intermediate_rows[i][j]);
			}
		}
		usleep(20000);
		system("clear");
	}
}
