#include <stdio.h>

int main() {
        int a = 5, b = 3, c = 2, d = 1;
        printf("%d \n", a + b * c / d); // 11
        printf("%d \n", a % b); // 2
        printf("%d, %d \n", a == b, a != b); // 0 1
        printf("%x, %x \n", a & b, a | b); // 0101 & 0011 = 0001, 0101 | 0011 = 0111
        printf("%x \n", ~a); // ~0101 = 1010
        printf("%x \n", a << 1); // 0101 <<1 = 1010
        printf("%x \n", a >> 1); // 0101 >>1 = 0010
        
        int t1, t2, t3, t4, t5;
        t1 = t2 = t3 = t4 = t5 = a;
        printf("%d, %d, %d, %d, %d \n", t1 += b, t2 -= b, t3 *= b, t4 /= b, t5 %= b); //8, 2, 15, 1, 2
}