#include <stdio.h>

int main (void){
    int i, num;
    printf("Ingrese un numero entero\n");
    scanf("%d", &num);

    printf("Los componentes numericos de %d son:\n", num);
    for (i=1; i<= num; i++){
        if(num % i == 0){
            printf("%d\n", i);
        }
    }
}