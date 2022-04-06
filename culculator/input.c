#include <stdio.h>
#include "input.h"
void input(VALUE_T *cd) {
    scanf("%f %c %f", &cd->su1, &cd->sign, &cd->su2);
    return ;
}