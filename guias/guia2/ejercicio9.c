#include <stdio.h>

char* mayusculizar(char *str);


int main(){
        char str[20];
        printf("Escribir string: ");
        scanf("%s", str);
        printf("String mayusculizado: %s \n", mayusculizar(str));
}

char* mayusculizar(char *str){
        char *temp = str;
        while(*temp != '\0'){
                if (*temp >= 'a' && *temp <= 'z') {*temp -= 32;}
                temp++;
        }
        return str;
}

