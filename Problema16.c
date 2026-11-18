/*Karla Yoseline Martinez Flores
Ejercicio
problema16.c*/

#include<stdio.h>
int main()
{
  int lista[100], i;

  for(i = 0; i < 100; i++)
  {
    lista[i] = (i * 2) + 2;
  }
  for(i = 0; i < 100; i++)
  {
    printf("\n%d", lista[i]);
  }    
  return 0;
}
