typedef struct {
    unsigned int m:23;
    unsigned int e:8;
    unsigned int s:1;
}raw_float_t;

typedef union {
    raw_float_t _raw;
    float f;
}float_t;

void silsuPrint(float *data)
{
    float_t *n;
    n->f = *data;
    printf("%f\n", n->f);
    int temp;
    temp = n->_raw.s;
    jeongsuPrint(&temp);
    temp = n->_raw.e;
    jeongsuPrint(&temp);
    temp = n->_raw.m;
    jeongsuPrint(&temp);
    return ;
}