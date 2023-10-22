#include <stdio.h>

int main (void){
    int num, sum, numS;

    printf("Ingrese un numero entero\n"); //Solicita un numero enteri
    scanf("%d", &num); //Asignacion del numero a la variable num
    numS= num; //Se le asigna el valor de num a numS para poder hacer uso de la variable num nuevamente al final
    sum= 0;
    do {
        sum= sum + (numS % 10); // Se adquiere el ultimo digito del numero ingresado y se lo suma a la variable sum
        numS= numS/10; // Esta division elimina el ultimo digito del numero ingresado
    } while (numS != 0); // Condicion de hasta cuando debe realizarse las operaciones de las lineas 11 y 12
    printf("La suma de los digitos del numero %d es: %d", num, sum);
}