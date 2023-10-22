#include <stdio.h>

int main (void){
    int num, digito, num1= 0; // Declaracion de Variables

    printf("Ingrese un numero entero de 3 cifras\n");
    scanf("%d", &num); // Asignacion del numero ingresado a la variable num

    if (num > 99 && num < 1000){ // Se establece esta condicion para conocer si el numero es de tres digitos 
        do{
            digito= num % 10; //Se saca este modulo para obtener el ultimo digito del numero ingresado
            if (digito == 1){ //Si el numero es 1 se le asigna el valor de 1 a la variable num1 para utilizarla en la impresion del resultado
                num1= 1;
                break;
            } 
            
        } while (num > 0); // Esta condicion permite hacer las operaciones de las lineas de arriba hasta que verifique cada numero 
        if (num1){
            printf("El numero si tiene el digito 1.\n"); // Si el valor de num1 es 1 se imprime que si tiene el digito 1
        } else {
            printf("El numero no tiene digito 1.\n");
        }

    } else {
        printf("El numero ingresado no cumple la condicion de 3 digitos\n");
    }
}