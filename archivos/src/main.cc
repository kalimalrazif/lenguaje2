/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 1; tab-width: 4 -*-  */
/*
 * main.cc
 * Copyright (C) 2017 Nomar Oscar Mora Tovar <nomar@echo1>
 * 
 * archivos is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * archivos is distributed in the hope that it will be useful, but
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
 
 std::ofstream salida("archivo.txt",std::ios::trunc);
 if(salida.is_open()) { salida << "Si abrio el archivo" << std::endl; } else { std::cout << "El archivo no abrio!!!" << std::endl; }
 salida.close();

 std::ifstream entrada("archivo.txt");
 if (entrada.is_open()) {
  char c;
  while(entrada.get(c)){
   std::cout << c << std::endl;
  }
 }
 
 entrada.clear();
 entrada.seekg(0,std::ios::beg);

 std::string linea;
 while(getline(entrada,linea)) {
  std::cout << linea << std::endl;
 }
 
 std::cout << "Hello world!" << std::endl;
 return 0;
}

