#include "output.h"
float process(VALUE_T *cd) {
    float res = 0;
    switch (cd->sign)
    {
    case '+':
        res = cd->su1 + cd->su2;
        break;
    case '-' :
        res = cd->su1 - cd->su2;
        break;
    case '*' :
        res = cd->su1 * cd->su2;
        break;
    case '/' :
        res = cd->su1 / cd->su2;
        break;
    default:
        break;
    }
    return res;
}