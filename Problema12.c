/*Karla Yoseline Martinez Flores
Ejercicio
problema12.c*/

#include<stdio.h>
int main()
{
  int N, i = 1, producto = 1;
  printf("Ingresar el primer numero entero: ");
  scanf("%d", &N);
  for(i = 1; i<= N; i++)
  {
    producto = producto * i;
  }
  printf("El producto es: %d\n", producto);
  return 0;
}
