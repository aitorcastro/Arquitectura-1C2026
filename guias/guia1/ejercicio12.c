#include <stdio.h>
#include <stdint.h>

int main(){
        int a[] = {1, 2, 3, 4};
        int n = sizeof(a) / sizeof(a[0]);
        int b[n];
        int r = 2;
        for (int i = 0; i < n; i++){
                int j = (i + r) % 4;
                b[i] = a[j];
                printf("%d", b[i]);
        }  
        
        
        printf("\n");
}