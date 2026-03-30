#include <stdio.h>

int main() {
        char c = 'A';
        unsigned char uc = 'B';
        short s = -1;
        unsigned short us = 12;
        int i = -12;
        unsigned ui = 1234;
        long l = -123456;
        unsigned long ul = 12345678;

        printf("char(%lu): %d \n", sizeof(c),c);
        printf("unsigned char(%lu): %d \n", sizeof(uc),uc);
        printf("short(%lu): %d \n", sizeof(s),s);
        printf("unsigned short(%lu): %d \n", sizeof(us),us);
        printf("int(%lu): %d \n", sizeof(i),i);
        printf("unsigned(%lu): %d \n", sizeof(ui),ui);
        printf("long(%lu): %ld \n", sizeof(l),l);
        printf("unsigned long(%lu): %ld \n", sizeof(ul),ul);
}