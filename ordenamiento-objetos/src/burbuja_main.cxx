#include <iostream>
#include "burbuja.h"


/* Aca definimos la funcion de comparacion, si es posible pasar funciones como
 * parametros a otras funciones :-)
 */
int comparacion (int a, int b);

int main(){

 int vector[10] = { 14, 12, 1, 100, 23, 22, 44, 76, 2, 7 };
 Burbuja b = Burbuja(vector, 10,comparacion);
 b.Sort1 ();
 b.ShowVector ();
 return 0;
}


int comparacion(int a, int b) {
 if (a<

     b) { return 1; }
 return 0;
}