/*Karla Yoseline Martinez Flores
Ejercicio
problema5.c*/

#include <stdio.h>

int main()
{
    float compra, total;
    
    printf("Ingrese el monto de la compra: ");
    scanf("%f", &compra);
    
    if(compra > 2500)
    {
        total = compra - (compra * 0.08);
        printf("El total a pagar con el 8%% de descuento es: %.2f\n", total);
    }
    else
    {
        total = compra;
        printf("El total a pagar es: %.2f\n", total);
    }
    
    return 0;
}
