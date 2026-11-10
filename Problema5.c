/*Karla Yoseline Martinez Flores
Ejercicio
problema5.c*/

#include <stdio.h>

int main() {
    float compra, total;

    printf("Ingrese el monto de la compra: ");
    scanf("%f", &compra);

    if (compra > 2500) {
        total = compra * 0.92; // Aplica el 8% de descuento
    } else {
        total = compra;
    }

    printf("El total a pagar es: $%.2f\n", total);

    return 0;
}
