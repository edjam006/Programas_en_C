#include <stdio.h>

int main (void){
    int num, sum;

    printf("Ingrese un numero entero\n");
    scanf("%d", &num);

    do {
        sum= sum + (num % 10);
    }
}