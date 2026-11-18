/Karla Yoseline Martinez Flores
Ejercicio
problema3.c*/

#include <stdio.h>

int main()
{  //Inicio

   //Declarar variables
   float dolares, pesos, conversion;
   conversion = 11.96;

   //Leer variables
   printf("Dame la cantidad en dolares: ");
     scanf("%f", &dolares);

   //Calcular los pesos
   pesos = conversion * dolares;

   //Imprimir pesos 
   printf("Los pesos es de %f. \n", pesos);

   return 0;
}
