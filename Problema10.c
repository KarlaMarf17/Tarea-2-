/*Karla Yoseline Martinez Flores
Ejercicio
Problema10.c*/

#include <stdio.h>

int main()
{
    int i, num;
    int positivos = 0, negativos = 0, nulos = 0;
    
    for(i = 1; i <= 100; i++)
    {
        printf("Ingrese el número %d: ", i);
        scanf("%d", &num);
        
        if(num > 0)
        {
            positivos++;
        }
        else if(num < 0)
        {
            negativos++;
        }
        else
        {
            nulos++;
        }
    }
    
    printf("\n--- Resultados Finales ---\n");
    printf("Cantidad de positivos: %d\n", positivos);
    printf("Cantidad de negativos: %d\n", negativos);
    printf("Cantidad de nulos (ceros): %d\n", nulos);
    
    return 0;
}
