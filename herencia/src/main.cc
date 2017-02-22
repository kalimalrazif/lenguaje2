/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 1; tab-width: 4 -*-  */
/*
 * main.cc
 * Copyright (C) 2017 Nomar Oscar Mora Tovar <nomar@echo1>
 * 
 * herencia is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * herencia is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <iostream>
#include "oveja.h"
#include "chupacabras.h"

int main()
{

 Oveja dolly = Oveja();
 Chupacabras chupi = Chupacabras();

 
 std::cout << "Dolly tiene " << dolly.getPatas() << " patas " << std::endl;
 std::cout << "Dolly tiene " << dolly.getOjos() << " ojos " << std::endl;
 if(dolly.getCola()) { 
  std::cout << "Dolly tiene una cola" << std::endl;
 } else {
  std::cout << "Dolly no tiene cola" << std::endl;
 }
 std::cout << "Dolly dice " << dolly.Habla() << std::endl;

 std::cout << "Dolly come " << dolly.Come() << std::endl;


 std::cout << "Chupi tiene " << chupi.getPatas() << " patas " << std::endl;
 std::cout << "Chupi tiene " << chupi.getOjos() << " ojos " << std::endl;
 if(chupi.getCola()) { 
  std::cout << "Chupi tiene una cola" << std::endl;
 } else {
  std::cout << "Chupi no tiene cola" << std::endl;
 }
 std::cout << "Chupi dice " << chupi.Habla() << std::endl;

 std::cout << "Chupi come " << chupi.Come() << std::endl;



 Animal *otra_dolly = new Oveja();

 std::cout << "Otra Dolly tiene " << otra_dolly->getPatas() << " patas " << std::endl;
 std::cout << "Otra Dolly tiene " << otra_dolly->getOjos() << " ojos " << std::endl;
 if(otra_dolly->getCola()) { 
  std::cout << "Otra Dolly tiene una cola" << std::endl;
 } else {
  std::cout << "Otra Dolly no tiene cola" << std::endl;
 }
 std::cout << "Otra Dolly dice " << otra_dolly->Habla() << std::endl;

 std::cout << "Otra Dolly come " << otra_dolly->Come() << std::endl;

 
 return 0;
 
}

