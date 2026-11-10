/*Karla Yoseline Martinez Flores
Ejercicio
Problema9.c*/

#include <stdio.h>

int main()
{
    int n, i;
    
    printf("Ingrese un número entero N: ");
    scanf("%d", &n);
    
    printf("\nTabla de multiplicar del %d:\n", n);
    
    for(i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    
    return 0;
}
