/*Karla Yoseline Martinez Flores
Ejercicio
Problema6.c*/

#include <stdio.h>

int main()
{
    float sueldo, sueldoFinal;
    
    printf("Ingrese el sueldo del trabajador: ");
    scanf("%f", &sueldo);
    
    if(sueldo < 1000)
    {
        sueldoFinal = sueldo + (sueldo * 0.15);
        printf("El sueldo con el 15%% de aumento es: %.2f\n", sueldoFinal);
    }
    else
    {
        sueldoFinal = sueldo + (sueldo * 0.12);
        printf("El sueldo con el 12%% de aumento es: %.2f\n", sueldoFinal);
    }
    
    return 0;
}
