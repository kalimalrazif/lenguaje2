/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 1; tab-width: 4 -*-  */
/*
 * animal.h
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

#ifndef _ANIMAL_H_
#define _ANIMAL_H_

#include <string>


class Animal
{
  public:
   void setPatas(int v);
   void setOjos(int v);
   void setCola(bool v);
   int getPatas();
   int getOjos();
   bool getCola();
   virtual std::string Habla();
   virtual std::string Come();
   Animal();
   Animal(int patas, int ojos, bool cola);

  protected:

  private:
   int patas;
   int ojos;
   int cola;

 };

#endif // _ANIMAL_H_

