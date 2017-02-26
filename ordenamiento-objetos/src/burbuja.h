/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 1; tab-width: 4 -*-  */
/*
 * burbuja.h
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
#include <iostream>

#ifndef _BURBUJA_H_
#define _BURBUJA_H_

class Burbuja
{
public:
  Burbuja(int v[], int l, int (*function)(int,int));
  void Sort1();
  void Sort2();
  void Sort3();
  void ShowVector();
protected:

private:
  int *vector;
  int longitud;
  int (*comparacion)(int,int);
  /*
   * Observen como esta definida la variabla a la que le vamos a asignar la 
   * funcion. tiene el mismo patron de la funcion original, es decir devuelve
   * un int y tiene dos enteros como parametros. Imaginenlo sencillamente como 
   * pasar un entero o pasar un float.
   */
};

#endif // _BURBUJA_H_

