#ifndef CONCATENATE_H
#define CONCATENATE_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "struct_banner.h"

void concatenate_to_columns(banner * bp);
void concatenate_to_rows(banner * bp);
void concatenate_to_output(banner * bp,int row);
void concatenate(banner * bp);

#endif //CONCATENATE_H
