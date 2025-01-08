//Suma de numeros ingresados por teclado. Agregando numeros impares hasta ingresar un cero a una cola dinámica.
//Por ultimo, viendo si hay numeros dentro de la cola que son mayores al promedio de la suma de todos los numeros.

#include <stdio.h>
#include "ColaEstática.h"

int main() {
    TCola Cnros;
    TElementoC num;
    int sum = 0, cuenta = 0, cont=0;
    float prom;

    IniciaC (&Cnros);
    printf("Ingrese un numero:\n ");
    scanf("%d",&num);
    while (num) {    //num!=0
        sum += num;
        cuenta++;
        if (num % 2)         //el resto es !=0
            poneC (&Cnros, num);
        printf("Ingrese un numero:\n ");
        scanf("%d",&num);
    }
    if (cuenta) {
        prom = sum/(float)cuenta;
        printf("%f \n", prom);
        printf("Los numeros impares mayores al promedio son: ");
        while (!VaciaC(Cnros)) {
            sacaC (&Cnros, &num);
            if (num > prom)
            {
                printf("%d ", num);
                cont++; //significa que hay al menos un numero mayor al promedio que sea impar
            }
        }
        if (!cont)
            printf("en este caso, no hay ninguno");
    }
    else
        printf("No se registraron numeros impares mayores al promedio");
    return 0;
}
