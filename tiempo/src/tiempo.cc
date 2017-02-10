/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * tiempo.cc
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

#include "tiempo.h"

void Tiempo::setH(int v)
{
	this->h = 0;
	this->addH(v);
}

int Tiempo::getH()
{
	return this->h;
}

void Tiempo::setM(int v)
{
	this->m = 0;
	this->addM(v);
}

int Tiempo::getM()
{
	return this->m;
}

void Tiempo::setS(int v)
{
	this->s = 0;
	this->addS(v);
	return;
}

int Tiempo::getS()
{
	return this->s;
}

void Tiempo::addH(int v)
{
	if (v < 0) { v=0; }
	this->h = this->h + v;
	return;
}

void Tiempo::addM(int v)
{
	int tmp = 0;
	if (v < 0) { v=0; }
	tmp = v + this->m;
	if (tmp > 59) {
		int horas = tmp / 60;
		this->addH (horas);
		this->m = tmp % 60;
	} else {
		this->m = tmp;
	}
	return;
}

void Tiempo::addS(int v)
{
	int tmp = 0;
	if (v < 0) { v=0; }
	tmp = v + this->s;
	if (tmp > 59) {
		int minutos = tmp / 60;
		this->addM (minutos);
		this->s = tmp % 60;
	} else {
		this-> s = tmp;
	}
	return;
}

Tiempo::Tiempo(): Tiempo(0,0,0) {
	
}

Tiempo::Tiempo(int h, int m, int s)
{
	this->setTiempo (h, m, s);
}

void Tiempo::setTiempo(int h,int m, int s)
{
	this->setH(h);
	this->setM(m);
	this->setS(s);
}

void Tiempo::delH(int v) {
	if (v < 0 ) { v = 0; }
	this->h = this->h - v;
	return;
}

void Tiempo::delM(int v) {
	int tmp = 0;
	if (v < 0 ) { v = 0; }
	if (v > 59) {
		tmp = v / 60;
		this->delH (tmp);
		tmp = v % 60;

		if ((( this->m - tmp ) < 0) && (this->getH() > 0 )) {
			this->delH (1);
			this->m = this->m + 60;
		} 

		this->m = this->m - tmp;
		
	} else {
		if ((( this->m - v ) < 0) && (this->getH() > 0 )) {
			this->delH (1);
			this->m = this->m + 60;
		} 
		this->m = this->m - v;
	}
	return;
}

void Tiempo::delS(int v) {
	int tmp = 0;
	if (v < 0 ) { v = 0; }
	if (v > 59) {
		tmp = v / 60;
		this->delM (tmp);
		tmp = v % 60;

		if ((( this->s - tmp ) < 0) && (this->getM() > 0 )) {
			this->delM (1);
			this->s = this->s + 60;
		} 

		this->s = this->s - tmp;
		
	} else {
		if ((( this->s - v ) < 0) && (this->getM() > 0 )) {
			this->delM (1);
			this->s = this->s + 60;
		} 
		this->s = this->s - v;
	}
	return;
}
