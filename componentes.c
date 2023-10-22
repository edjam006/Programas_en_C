#include <stdio.h>

int main (void){
    int i, num;
    printf("Ingrese un numero entero\n"); // Solicitud del numero entero
    scanf("%d", &num);//Asignacion del numero ingresado a la variable num

    printf("Los componentes numericos de %d son:\n", num);
    for (i=1; i<= num; i++){ //Dentro del for se ubica el contador, con la condicion y el incremento
        if(num % i == 0){ // Para cada numero del contador se saca el modulo para saber si es divisible para los numeros entre el rango de 1 hasta el numero ingresado
            printf("%d\n", i); //Impresion del resultado
        }
    }
}