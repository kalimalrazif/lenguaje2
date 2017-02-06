/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * tiempo.h
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

#ifndef _TIEMPO_H_
#define _TIEMPO_H_

class Tiempo
{
	 public:
		 void setTiempo(int h,int m, int s);
		 void setH(int v);
		 void setM(int v);
		 void setS(int v);
		 int getH();
		 int getM();
		 int getS();
		 void addH(int v);
		 void addM(int v);
		 void addS(int v);
		 void delH(int v);
		 void delM(int v);
		 void delS(int v);
		 Tiempo();
		 Tiempo(int h, int m, int s);

	 protected:

	 private:
		 int h;
		 int m;
		 int s;

 };

#endif // _TIEMPO_H_

