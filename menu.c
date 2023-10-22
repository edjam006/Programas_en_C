#include <stdio.h>

int main(void){
    int opc, num, pareja, nuevo, sum, i, numS, digito, num1;
    do {
    printf("1. Ejercicio 48\n2. Ejercicio 39\n3. Ejercicio 30\n4. Ejercicio 21\n5. Ejercicio 12\n6. Salir\n");
    scanf("%d", &opc);
    switch (opc)
    {
    case 1:
        pareja=1;
        for (num= 0; num < 10; num++){
            printf("%d %d\n", num, pareja);
        if (num % 2 !=0){
            pareja++;
        }
        }
        break;

    case 2:
        num = 0;
        printf("%d\n", num); 
        for (nuevo= 1; nuevo <= 11000;){ 
            printf("%d\n", nuevo); 
            sum= nuevo + num; 
            num= nuevo; 
            nuevo= sum;
        }
        break;

    case 3:
        
            printf("Ingrese un numero entero\n");
            scanf("%d", &num);
            printf("Los componentes numericos de %d son:\n", num);
            for (i=1; i<= num; i++){
                if(num % i == 0){
                printf("%d\n", i);
                }
            }
        break;

    case 4:
        
        printf("Ingrese un numero entero\n");
        scanf("%d", &num);
        numS= num;
        sum= 0;
            do {
                sum= sum + (numS % 10);
                numS= numS/10;
            } while (numS != 0);
            printf("La suma de los digitos del numero %d es: %d", num, sum);
        break;

    case 5:
        num1= 0;

            printf("Ingrese un numero entero de 3 cifras\n");
            scanf("%d", &num);
            if (num > 99 && num < 1000){

            do{
                digito= num % 10;
                if (digito == 1){
                num1= 1;
                break;
                } 
            } while (num > 0);

            if (num1){
                printf("El numero si tiene el digito 1.\n");
            } else {
                printf("El numero no tiene digito 1.\n");
            }

            } else {
                printf("El numero ingresado no cumple la condicion de 3 digitos\n");
            }
        break;

    case 6: 
    printf("Saliendo...\n");

    default:
        printf("La opcion ingresada no esta dentro de las opciones\n");
        break;
    }
    } while (opc != 6);
}