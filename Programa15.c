/*Karla Yoseline Martinez Flores
Ejercicio
Problema15.c*/

#include<stdio.h>
int main()
{
  int N, i = 0, positivos = 0, negativos = 0, nulos = 0;
  printf("Ingrese las variables que desee: ");
  scanf("%d", &N);

  int lista[N];
  for(i = 0; i < N; i++)
  {
    printf("Ingrese un valor: ");
    scanf("%d", &lista[i]);
    if(lista[i] > 0)
    {
      positivos++;
    }
    if(lista[i] < 0)
    {
      negativos++;
    }
    if(lista[i] == 0)
    {
      nulos++;
    }
  }
  printf("%d", positivos);
  printf("%d", negativos);
  printf("%d", nulos);

  return 0;
}
