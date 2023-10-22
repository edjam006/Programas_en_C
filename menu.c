#include <stdio.h>

int main(void){
    int opc;
    do {
    printf("1. Ejercicio 48\n2. Ejercicio 39\n3. Ejercicio 30\n4. Ejercicio 21\n5. Ejercicio 12\n6. Salir\n");
    scanf("%d", &opc);
    switch (opc)
    {
    case 1:
        int num1, pareja=1;

        for (num1= 0; num1 < 10; num1++){
            printf("%d %d\n", num1, pareja);
        if (num1 % 2 !=0){
            pareja++;
        }
        }
        break;
    case 2:
        int num= 0, nuevo, sum; 
        printf("%d\n", num); 
        for (nuevo= 1; nuevo <= 11000;){ 
            printf("%d\n", nuevo); 
            sum= nuevo + num; 
            num= nuevo; 
            nuevo= sum;
        }
        break;
    case 3:
        
    default:
        break;
    }
    } while (opc != 6);
}