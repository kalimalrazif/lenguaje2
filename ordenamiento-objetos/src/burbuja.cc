/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 1; tab-width: 4 -*-  */
/*
 * burbuja.cc
 * Copyright (C) 2017 Nomar Oscar Mora Tovar <nomar@echo1>
 *
 * ordenamiento-objetos is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * ordenamiento-objetos is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "burbuja.h"


Burbuja::Burbuja(int v[], int l, int (*function)(int,int)): vector(v) {
 this->longitud = l;
 this->comparacion = function; //Observen com sencillamente igualamos uno al otro
}

void Burbuja::Sort1() {
 int i;
 int j;
 for (i = 0; i < this->longitud; i++) {
  for (j = 0; j <= this->longitud-2; j++) {
   if(this->comparacion(this->vector[j], this->vector[j+1])) {   // En el original esta era la linea arreglo[j] > arreglo[j+1]
	int aux = this->vector[j];
	this->vector[j] = this->vector[j+1];
	this->vector[j+1] = aux;
   }
  }
 }
}

void Burbuja::Sort2() {
 int i = 1;
 int j;
 int ordenado = 1;

 while((ordenado) && (i<10)){
  i++;
  ordenado = 0;
  for(j=0; j<=this->longitud-i; j++) {
   if (this->comparacion(this->vector[j], this->vector[j+1])) {
	ordenado = 1;
	int aux = this->vector[j];
	this->vector[j] = this->vector[j+1];
	this->vector[j+1] = aux;
   }
  }
 } 
}

void Burbuja::Sort3() {
 int i = 1;
 int j;
 int ordenado = 1;
 int iteracion = 1;
 do{
  i++;
  ordenado = 0;
  for(j=0; j<=this->longitud-i; j++) {
   if (this->comparacion(this->vector[j], this->vector[j+1])) {
	ordenado = 1;
	int aux = this->vector[j];
	this->vector[j] = this->vector[j+1];
	this->vector[j+1] = aux;
   }
  }
 } while((i<this->longitud) && (ordenado));
}

void Burbuja::ShowVector(){
 int i;
 for (i=0; i< this->longitud; i++) {
  std::cout << this->vector[i] << " ";
 }
 std::cout << std::endl;
 return;
}