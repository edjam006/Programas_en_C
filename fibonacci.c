#include <stdio.h>

int main (void){
    int num= 0, nuevo, sum;

     for (nuevo= 1; nuevo <= 11000;){ 
            
            sum= nuevo + num;
            num= nuevo;
            nuevo= sum;
        }
}