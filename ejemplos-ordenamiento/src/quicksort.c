/*
 * quicksort.c
 *
 * Copyright (C) 2014 - Nomar Oscar Mora Tovar
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */
#include <stdio.h>
#include "libgen.h"

void qs(int lista[],int limite_izq,int limite_der, int *iteracion)
{
   int izq,der,temporal,pivote;

   izq=limite_izq;
   der = limite_der;
   pivote = lista[(izq+der)/2];

   do{
      while(lista[izq]<pivote && izq<limite_der)izq++;
	  while(pivote<lista[der] && der > limite_izq)der--;
		 if(izq <=der)
	     {
	         temporal= lista[izq];
	         lista[izq]=lista[der];
	         lista[der]=temporal;
	         izq++;
	         der--;
			printf("Iteracion #%03d ", (*iteracion)++);
			imprimir_arreglo(lista); 
	     }
   }while(izq<=der);
   if(limite_izq<der){qs(lista,limite_izq,der, iteracion);}
   if(limite_der>izq){qs(lista,izq,limite_der, iteracion);}

}

void quicksort(int lista[],int n, int *iteracion)
{
   
   qs(lista,0,n-1, iteracion);
}

int main()
{

   int arreglo[10] = {1,4,20,10,3,8,9,14,21,6};
   int size = sizeof(arreglo)/sizeof(int);
   int iteracion = 1;
   
   printf("Iteracion #%03d ", iteracion++);
   imprimir_arreglo(arreglo);
   quicksort(arreglo,size, &iteracion);

   printf("Iteracion #%03d ", iteracion++);
   imprimir_arreglo(arreglo);
   
   return 0;
}