# Clase para manejo de tiempos

En este ejercicio se inmplementa una clase para el manejo de horas, minutos y segundos. La idea es demostrar la implementacion de una clase sencilla en C++.

# Interfaz de clase
´´´
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
´´´

