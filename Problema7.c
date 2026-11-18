/*Karla Yoseline Martinez Flores
Problema
problema7.c*/

#include<stdio.h>
int main()
{
  int dias;
  float distancia, precioticket, descuento, total, distanciatotal;
  printf("La distancia de ida: ");
  scanf("%f", &distancia);
  printf("Los dias de estancia: ");
  scanf("%d", &dias);
  distanciatotal = distancia * 2;
  precioticket = distanciatotal * 0.23;
  if (dias > 7 && distanciatotal > 800)
    {
      descuento = precioticket * 0.30;
      total = precioticket - descuento;
    }
  else
    {
      total = precioticket;
    }
  printf("El total es: %f.\n", total);
  return 0;
}
