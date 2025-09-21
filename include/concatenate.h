#ifndef CONCATENATE_H
#define CONCATENATE_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "banner.h"
#include "font_graffiti.h"

void strip_newlines(banner * bp);

void concateneate_row(banner * bp);
void concatenate(banner * bp);

#endif //CONCATENATE_H
