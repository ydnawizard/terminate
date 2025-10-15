#ifndef CONCATENATE_H
#define CONCATENATE_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "font_def_graffiti.h"
#include "struct_banner.h"

void concatenate_intermediate_to_rows(banner * bp);
void concatenate_intermediate_to_columns(banner * bp);
void concatenate_intermediate_to_output(banner * bp);
void concatenate_intermediate_to_all(banner * bp);
void concatenate_rows_to_output(banner * bp);

#endif //CONCATENATE_H
