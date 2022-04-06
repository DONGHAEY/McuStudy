#include <stdio.h>
#include "input.h"
#include "process.h"
#include "output.h"
#include "value_t.h"

int main(void) {
    VALUE_T cd;
    input(&cd);
    float result = process(&cd);
    print(cd, result);
    return 0;
}