/*Karla Yoseline Martinez Flores
Ejercicio
problema1.c*/

#include <stdio.h>

int main()
{  //Inicio

   //Declarar variables
  float num1, num2, suma, resta, mult;

   
   printf("Dame el primer numero: ");
   scanf("%f", &num1);
   printf("Dame el segundo numero: ");
   scanf("%f", &num2);

   //Calcular la suma, resta y la mult
   suma = num1 + num2;
   resta = num1 - num2;
   mult = num1 * num2;

   //Imprimir la suma, resta y la mult
   printf("La suma es de %f. \n", suma);
   printf("La resta es de %f. \n", resta);
   printf("La mult es de %f. \n", mult);

   return 0;

}
