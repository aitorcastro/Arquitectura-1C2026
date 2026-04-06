#include <stdio.h>

int main()
{
        float f = 0.1;
        double d = 0.1;
        printf("float: %f \ndouble: %f \n", f, d);

        int fi = (int)f;
        int di = (int)d;

        printf("float as int: %d \ndouble as int: %d \n", fi, di);
}