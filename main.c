#include <stdio.h>
#include <stdlib.h>

int factorial(int numero){
    if(numero==0 || numero==1){ return 1; }
    else{ return numero*factorial(numero-1); }
}
int multipicacion(int factor, int factor2){
    if(factor2 == 1){ return factor; }
    else{ return factor + multipicacion(factor, factor2-1); }
}
int division(int dividendo, int divisor, int cociente){
    if(dividendo < divisor){ return cociente; }
    else{ return division(dividendo - divisor, divisor, cociente + 1); }
}

int main(){
    printf("El factorial de 5 es %i", factorial(5));
    printf("\n10 x 10 es %i", multipicacion(10, 10));
    printf("\n100 / 5 es %i", division(100, 5, 0));
    return 0;
}