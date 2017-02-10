/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * main.cc
 * Copyright (C) 2017 Nomar Mora <nomar@casa01>
	 * 
 * tiempo is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
	 * 
 * tiempo is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <iostream>
#include "tiempo.h"

int main()
{
	Tiempo t1 = Tiempo();
	Tiempo t2 = Tiempo(20,00,40);

	std::cout  << "Horas: " << t1.getH () << " Minutos: " << t1.getM () << " Segundos: " << t1.getS () << std::endl;
	t1.addM(400);
	t1.addS(125);
	t1.addM(18);
	std::cout  << "Horas: " << t1.getH () << " Minutos: " << t1.getM () << " Segundos: " << t1.getS () << std::endl;

	std::cout  << "Horas: " << t2.getH () << " Minutos: " << t2.getM () << " Segundos: " << t2.getS () << std::endl;	
	t2.delH(10);
	t2.delM(30);
	t2.delS(120);
	std::cout  << "Horas: " << t2.getH () << " Minutos: " << t2.getM () << " Segundos: " << t2.getS () << std::endl;
	return 0;
}


