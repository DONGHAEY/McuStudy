#include <stdio.h>

#include "jeongsu.h"
#include "silsu.h"

int main() {
    float data;
    int idata;
    scanf("%f", &data);
    if(data - (int)data == 0) {
        idata = data;
        jeongsuPrint(&idata);
    } else {
        silsuPrint(&data);
    }
}