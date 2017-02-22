/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 1; tab-width: 4 -*-  */
/*
 * oveja.cc
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

#include "oveja.h"

std::string Oveja::Habla() {
 return "Meeeeeee!!!!";
}

std::string Oveja::Come() {
 return "pasto";
}
Oveja::Oveja():Animal(4,2,true){}