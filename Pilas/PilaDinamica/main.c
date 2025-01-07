//Implementación de una Pila Dinámica. Este ejemplo hace que se ingrese un número y lo convierta a su binario utilizando una Pila.

#include<stdio.h>
#include "PilaDinámica.h"

int main() {
    TPila P;
    TElementoP bit;
    int num, numero;
    IniciaP(&P);
    printf("Ingrese un numero entero para calcular su binario ");
    scanf("%d",&numero);
    num=numero;
    while (numero != 0) {
        poneP(&P, numero % 2);
        numero /= 2;
    }
    printf("Representacion de %d en base 2 \n", num);
    while (!VaciaP(P)) {
        sacaP(&P,&bit);
        printf("%d ",bit);
    }
    return 0;
}
