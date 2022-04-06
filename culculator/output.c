#include <stdio.h>
#include "output.h"
void print(VALUE_T cd, float res) {
    printf("%f %c %f = %f", cd.su1, cd.sign, cd.su2, res);
    return ;
}