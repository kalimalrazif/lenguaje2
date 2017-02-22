/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 1; tab-width: 4 -*-  */
/*
 * animal.cc
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

#include "animal.h"

std::string Animal::Habla() { 
 
 return "emite sonido";
}

std::string Animal::Come() {
 return "algo";
}

void Animal::setPatas(int v) {
 if (v < 0) { v = 0; }
 this->patas = v;
 return;
}

void Animal::setOjos(int v) {
 if (v < 0) { v = 0; }
 if (v % 2 != 0 ) { v = v-1; }
 this->ojos = v;
 return;
}

void Animal::setCola(bool v) {
 this->cola = v;
 return;
}


int Animal::getPatas() {
 return this->patas;
}

int Animal::getOjos() {
 return this->ojos;
}

bool Animal::getCola() {
 return this->cola;
}

Animal::Animal(int patas, int ojos, bool cola ) {
 this->setPatas (patas);
 this->setOjos (ojos);
 this->setCola (cola);
}

Animal::Animal():Animal(0,0,true) {

}