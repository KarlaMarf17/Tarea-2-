/*Karla Yoseline Martinez Flores
Ejercicio
Problema2.c*/

#include <stdio.h>

int main()
{  //Inicio

   //Declarar variables
   float radio, area, circunf, pi;
   pi = 3.141592;

   //Leer las variables
   printf("Dame el radio del circulo: ");
   scanf("%f", &radio);

   //Calcular el area y la circunf
   area = pi * radio * radio;
   circunf = 2 * pi * radio;

   //Imprimir area y circunf
   printf("El area es de %f. \n", area);
   printf("La circunf es de %f. \n", circunf);

   return 0;
}
