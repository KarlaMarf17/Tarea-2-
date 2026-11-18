/*Karla Yoseline Martinez Flores 
Ejercicio
problema11.c*/

#include<stdio.h>
int main()
{
  int i = 10, suma = 0;
  while(i <= 50)
  {
    if(i % 2 == 0)
    {
    suma = suma + i;
    }

    i++;
  }
  printf("La suma es: %d\n", suma);
  return 0;
}
