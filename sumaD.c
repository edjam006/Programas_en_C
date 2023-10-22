#include <stdio.h>

int main (void){
    int num, sum;

    printf("Ingrese un numero entero\n");
    scanf("%d", &num);
    sum= 0;
    do {
        sum= sum + (num % 10);
        num= num/10;
    } while (num != 0);
    printf("La suma de los digitos del numero %d es: %d", num, sum);
}