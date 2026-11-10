/*Karla Yoseline Martinez Flores
Ejercicio
Problema14.c*/

#include<stdio.h>

int main()
{
    int n, i, numeroBuscado;
    int contador = 0;
    
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);
    
    int arreglo[n];
    
    printf("Ingrese los %d números enteros del arreglo:\n", n);
    for(i = 0; i < n; i++)
    {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }
    
    printf("Ingrese el número entero que desea buscar: ");
    scanf("%d", &numeroBuscado);
    
    for(i = 0; i < n; i++)
    {
        if(arreglo[i] == numeroBuscado)
        {
            contador++;
        }
    }
    
    printf("\nEl número %d aparece %d vez/veces en el arreglo.\n", numeroBuscado, contador);
    
    return 0;
}
