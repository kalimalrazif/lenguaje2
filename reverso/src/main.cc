/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 1; tab-width: 4 -*-  */
/*
 * main.cc
 * Copyright (C) 2017 Nomar Oscar Mora Tovar <nomar@echo1>
 * 
 * reverso is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * reverso is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <iostream>
#include <fstream>

int main()
{
 std::ifstream archivo;
 std::streampos tamano;
 archivo.open("entrada.txt");

 if (!archivo.is_open()) { std::cout << "Pues no pude abrir el archivo" << std::endl;  return -1; }

 archivo.seekg ( 0, std::ios::end );
 tamano = archivo.tellg();
 while(tamano){
   archivo.seekg ( tamano-1, std::ios::beg );
   char a = archivo.get();
   std::cout << a;
   tamano = tamano - 1;
 }
 
 return 0;
}

