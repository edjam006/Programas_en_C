#include <stdio.h>

int main (void){
    int num, digito;

    printf("Ingrese un numero entero de 3 cifras\n");
    scanf("%d", &num);

    if (num > 99 && num < 1000){
        printf("Numero correcto\n");
    } else {
        printf("El numero ingresado no cumple la condicion de 3 digitos\n");
    }
    
}