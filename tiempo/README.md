# Clase para manejo de tiempos

En este ejercicio se inmplementa una clase para el manejo de horas, minutos y segundos. La idea es demostrar la implementacion de una clase sencilla en C++.

# Interfaz de clase

```c++
class Tiempo {
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
```

## Propiedades

La clase tiene tres propiedades privadas de tipo entero todas:
* `h` para las horas. 
* `m` para los minutos.
* `s` para los segundos.

## Metodos

Se cuentan con los metodos set y get para cada clase. 

* `addH(int v)` para agregar horas.
* `addM(int v)` para agregar minutos.
* `addS(int v)` para agregar segundos.
* `delH(int v)` para restar horas.
* `delM(int v)` para restar minutos.
* `delS(int v)` para restar segundos.

