/*Karla Yoseline Martinez Flores
Ejercicio
problema8.c*/

#include<stdio.h>
int main()
{
  int num1, num2;
  printf("Ingrese la primer variable: ");
  scanf("%d", &num1);
  printf("Ingrese la segunda variable: ");
  scanf("%d", &num2);
  if(num1 != 0 && num2 != 0)
  {
    if(num1 % num2 == 0)
    {
      printf("num1 es divisible entre num2.\n");
    }
    if(num2 % num1 == 0)
    {
      printf("num2 es divisible entre num1.\n");
    }
    if(num1 % num2 != 0 && num2 % num1 != 0)
    {
      printf("Ninguno es divisor del otro.\n");
    }
  }
  else
  {  
    printf("Los numeros deben ser diferentes de cero.\n");
  }
  return 0;
}
