/*
 * mergesort.c
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
#include <stdlib.h>
#include "libgen.h"


#define LEN 20
#define MAXEL 100

void merge(int * lista, int izq_inicio, int izq_fin, int der_inicio, int der_fin, int *iter) {
   /* calcular el tamaño temporal de las listas */
   int izq_longitud = izq_fin - izq_inicio;
   int der_longitud = der_fin - der_inicio;

   /* declaracion de las listas temporales */
   int izq_mitad[izq_longitud];
   int der_mitad[der_longitud];

   int r = 0; /* indice de la derecha */
   int l = 0; /* indice de la izquierda */
   int i = 0; /* indice de la lista */


   /* copiamos la mitad izquierda en izq_mitad */
   for (i = izq_inicio; i < izq_fin; i++, l++)
   {
	  izq_mitad[l] = lista[i];
   }

   /* copiamos la mitad derecha en der_mitad */
   for (i = der_inicio; i < der_fin; i++, r++)
   {
	  der_mitad[r] = lista[i];
   }

   printf("Iteracion #%03d lista izquierda ", (*iter));
   imprimir_lista(izq_mitad, izq_longitud);

   printf("Iteracion #%03d lista derecha ", (*iter));
   imprimir_lista(der_mitad, der_longitud);
   
   /* merge left_half and right_half back into list */
   for ( i = izq_inicio, r = 0, l = 0; l < izq_longitud && r < der_longitud; i++)
   {
	  if ( izq_mitad[l] < der_mitad[r] ) { lista[i] = izq_mitad[l++]; }
	  else { lista[i] = der_mitad[r++]; }
	  printf("Iteracion #%03d mezcla, ", (*iter));
	  imprimir_arreglo(lista);
   }

   /* Copie las sobras de lo que quedo en la lista temporal que no esta completo */
   for ( ; l < izq_longitud; i++, l++) { 
	  lista[i] = izq_mitad[l];
	  printf("Iteracion #%03d sobras lista parcial izquierda, ", (*iter));
	  imprimir_arreglo(lista);
   }
   for ( ; r < der_longitud; i++, r++) { 
	  lista[i] = der_mitad[r];
	  printf("Iteracion #%03d sobras lista parcial derecha, ", (*iter));
	  imprimir_arreglo(lista);
   }
   (*iter)++;
}

void mergesort_r(int izq, int der, int * lista, int *iter) {
   /* Base case, the list can be no simpiler */
   if (der - izq <= 1) {
	  return;
   }

   /* determinamos los limites para la division del arreglo */
   int izq_inicio  = izq;
   int izq_fin     = (izq+der)/2;
   int der_inicio  = izq_fin;
   int der_fin     = der;

   /* ordene la mitad izquierda */
   mergesort_r( izq_inicio, izq_fin, lista, iter);
   /* ordene la mitad derecha */
   mergesort_r( der_inicio, der_fin, lista, iter);

   /* mezcle ordenadamente las dos mitades juntas */
   merge(lista, izq_inicio, izq_fin, der_inicio, der_fin, iter);
}

void mergesort(int * lista, int longitud, int *iter) {
   mergesort_r(0, longitud, lista, iter);
}

int main() {

   int arreglo[10] = {1,4,20,10,3,8,9,14,21,6};
   int iteracion = 1;


   printf("Iteracion #%03d ", iteracion++);
   imprimir_arreglo(arreglo);

   mergesort(arreglo, 10, &iteracion);

   printf("Iteracion #%03d ", iteracion++);
   imprimir_arreglo(arreglo);
   return 0;
}