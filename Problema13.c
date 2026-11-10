/*Karla Yoseline Martinez Flores
Ejercicio
Problema13.c*/

#include<stdio.h>

int main()
{
    int n, i;
    int suma = 0;
    
    printf("Ingrese la cantidad de elementos del arreglo: ");
    scanf("%d", &n);
    
    int arreglo[n];
    
    printf("Ingrese los %d números enteros:\n", n);
    for(i = 0; i < n; i++)
    {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);
        suma = suma + arreglo[i];
    }
    
    printf("\nLa suma total de los elementos del arreglo es: %d\n", suma);
    
    return 0;
}
