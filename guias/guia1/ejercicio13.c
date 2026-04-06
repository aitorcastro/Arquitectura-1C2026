#include <stdio.h>
#include <stdlib.h>

int main() {
        int nums[6] = {0};
        for (int i = 0; i < 60000000; i++){
                int dado = rand() % 6; // va a dar un numero de 0 - 5 que "mapeamos" a 1-6 de un dado
                nums[dado] += 1;
        }

        for (int i = 0; i < 6; i++){
                printf("%d salio: %d veces\n", i + 1, nums[i]);
        }
}