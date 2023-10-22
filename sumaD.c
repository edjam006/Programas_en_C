#include <stdio.h>

int main (void){
    int num, sum, numS;

    printf("Ingrese un numero entero\n");
    scanf("%d", &num);
    numS= num;
    sum= 0;
    do {
        sum= sum + (numS % 10);
        numS= numS/10;
    } while (numS != 0);
    printf("La suma de los digitos del numero %d es: %d", num, sum);
}