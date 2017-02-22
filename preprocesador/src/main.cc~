/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 1; tab-width: 4 -*-  */
/*
 * main.cc
 * Copyright (C) 2017 Nomar Oscar Mora Tovar <nomar@echo1>
 * 
 * preprocesador is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * preprocesador is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <iostream>
#include "valores.h"
#define MULT(x, y) x * y //Este es otro tipo de definicion una que tiene argumentos

int main()
{

#define PERRO "Collie"
 std::cout << "Mi perro es un " << PERRO << std::endl;

#undef PERRO

#define PERRO "Chiwawa"
  std::cout << "Mi perro es un " << PERRO << std::endl;

#ifdef PERRO
 std::cout << "Perro esta definido"<< std::endl;
#else
 std::cout << "Perro NO esta definido"<< std::endl;
#endif

#ifndef VALOR
 #define VALOR
 #define MENSAJE "Hay que ser valiente"
#endif

 std::cout << MENSAJE << std::endl;

std::cout << MULT(4,3) << std::endl; 
 return 0;
}

