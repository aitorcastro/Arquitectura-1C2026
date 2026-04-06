#include <stdio.h>
#include <stdint.h>

int main(){
        int a[] = {7, 6, 3, 4};
        int n = sizeof(a) / sizeof(a[0]);
        int b[n];
        for (int i = 0; i < n; i++){
                int j = (i + 1) % 4;
                b[i] = a[j];
                printf("%d", b[i]);
        }  
        
        
        printf("\n");
}