/***************************************************************************
 *            libgen.c
 *
 *  sáb marzo 22 15:43:00 2014
 *  Copyright  2014  Nomar Oscar Mora Tovar
 *  <user@host>
 ****************************************************************************/
/*
 * libgen.c
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
void imprimir_arreglo(int *a) {
	int i;
    int size = sizeof(a)/sizeof(int);
	printf( "elementos del arreglo: ");
	for (i = 0; i < 10; i++) {
		printf(" %d", a[i]);
	} 
	printf("\n");
	return;
}

void imprimir_lista(int *a, int longitud) {
	int i;
	printf( "elementos del arreglo: ");
	for (i = 0; i < longitud; i++) {
		printf(" %d", a[i]);
	} 
	printf("\n");
	return;
}