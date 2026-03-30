#include <stdio.h>
#include <stdint.h>

int main() {
        int8_t c = 'A';
        uint8_t uc = 'B';
        int16_t s = -1;
        uint16_t us = 12;
        int32_t i = -12;
        uint32_t ui = 1234;
        int64_t l = -123456;
        uint64_t ul = 12345678;

        printf("int8_t(%lu bit): %d \n", sizeof(c),c);
        printf("uint8_t(%lu bit): %d \n", sizeof(uc),uc);
        printf("int16_t(%lu bits): %d \n", sizeof(s),s);
        printf("uint16_t(%lu bits): %d \n", sizeof(us),us);
        printf("int32_t(%lu bits): %d \n", sizeof(i),i);
        printf("uint32_t(%lu bits): %d \n", sizeof(ui),ui);
        printf("int64_t(%lu bits): %ld \n", sizeof(l),l);
        printf("uint64_t(%lu bits): %ld \n", sizeof(ul),ul);
}