#include <stdio.h>

int main (void){
    int i, num;
    printf("Ingrese un numero entero\n");
    scanf("%d", num);

    for (i=0; i<= num; i++){
        if(num % i == 0){
            printf("%d", i);
        }
    }
}