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
	for(int i = 0; i < strlen(bp.text); i++)
	{
		printf("%s\n",bp.intermediate[i]);
	}
	/*for(int i = 0; i < graffiti_char_len * strlen(bp.text); i++)
	{
		printf("%s",bp.output[i]);
	}*/
	printf("\n%s\n",bp.text);
}
