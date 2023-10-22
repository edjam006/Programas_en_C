#include <stdio.h>

int main(void){
    int num1, pareja=1;
    for (num1= 0; num1 < 10; num1++){ // Se establecen las condiciones dentro del ciclo for ya que se requieren las parejas del 0-9
        printf("%d %d\n", num1, pareja); // Se imprime antes de hacer la operacion para que asi con el valor asignado a cada variable sea el que aparezca en la impresion
        if (num1 % 2 !=0){ // En el la operacion dentro del if se verifica mediante el modulo si el numero es impar
            pareja++;// Se incrementa el contador de pareja
        }
    
    }
    

}