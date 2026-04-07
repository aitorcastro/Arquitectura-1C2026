#include <stdio.h>

int factorial(int n);
int main() {
        printf("%d\n", factorial(5));
}

int factorial(int n) {
        int res = 1;
        for (int i = 1; i <= n; i++) {
                res = res * i;
        }
        return res;
}