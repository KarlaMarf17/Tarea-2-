/*Karla Yoseline Martinez Flores
Ejercicio
problema4.c*/

#include <stdio.h>

int main()
{  //Inicio

   //Declarar variables
   float dinero, tasa, monto, capital;

   //Leer las variables
   printf("Dame la capital: ");
   scanf("%f", &capital);
   printf("Dame la tasa: ");
   scanf("%f", &tasa);

   //Calcular la tasa, el monto y dinero
   tasa = tasa / 100;
   dinero = capital * tasa;
   monto = capital + dinero;

   //Imprimir el monto 
   printf("El monto es de %f. \n", monto);

   return 0;
}
