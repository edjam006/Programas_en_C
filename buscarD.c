#include <stdio.h>

int main (void){
    int num, digito, num1= 0;

    printf("Ingrese un numero entero de 3 cifras\n");
    scanf("%d", &num);

    if (num > 99 && num < 1000){
        do{
            digito= num % 10;
            if (digito == 1){
                num1= 1;
            } else {
                num1= 0;
            }
        } while (num > 0);
       
    } else {
        printf("El numero ingresado no cumple la condicion de 3 digitos\n");
    }
    if (num1 == 1){
         printf("El numero si tiene el digito 1.\n");
    } else {
            printf("El numero no tiene digito 1.\n");
    }
}