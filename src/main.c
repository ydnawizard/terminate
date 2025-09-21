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
		printf("%s",bp.intermediate_rows[i]);
	}
	printf("%s\n",bp.output);
	/*scroll_horizontal(&bp);
	printf("%s\n",bp.output);
	*/
}
