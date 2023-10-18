#include <stdio.h>

int main (void){
    int num= 0, nuevo, sum; //Declaracion de Variables
     printf("%d\n", num); //Impresion del numero 0 para que inicie la serie de Fibonacci
     for (nuevo= 1; nuevo <= 11000;){ //Se otorga el valor de 1 a la variable nuevo, y se plantea la condicion de que siga operando mientras sea <= 11000
            printf("%d\n", nuevo); //Esta impresion muestra cada resultado que queremos de la serie 
            sum= nuevo + num; //Esta operacion realiza la suma de los dos ultimos numeros
            num= nuevo; //Al numero se le otorga el valor de la variable nuevo
            nuevo= sum; //Aqui la variable nuevo adquiere el nuevo valor de la suma, para que se vuelva a realizar el for y obtener los nuevos resultados 
        }
}