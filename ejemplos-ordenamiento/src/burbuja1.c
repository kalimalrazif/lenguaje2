/*
 * burbuja1.c
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

int main() {
	int arreglo[10] = {1,4,20,10,3,8,9,14,21,6};
	int i;
	int j;
    int iteracion = 1;
   
	imprimir_arreglo (arreglo);
	
	for (i = 0; i < 10; i++) {
		for (j = 0; j <= 8; j++) {
			if (arreglo[j] > arreglo[j+1]) {
				int aux = arreglo[j];
				arreglo[j] = arreglo[j+1];
				arreglo[j+1] = aux;
			}
		    printf("Iteracion #%03d ", iteracion++);
			imprimir_arreglo (arreglo);
		}
		
	}
	return (0);
}