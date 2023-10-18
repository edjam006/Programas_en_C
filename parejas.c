#include <stdio.h>

int main(void){
    int num1, pareja=1;
    for (num1= 0; num1 < 10; num1++){
        printf("%d %d\n", num1, pareja);
        if (num1 % 2 !=0){
            pareja++;
        }
    
    }
    

}