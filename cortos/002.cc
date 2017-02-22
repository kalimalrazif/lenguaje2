#include <iostream>
using namespace std;
 
class Tiempo {
  public:
   Tiempo(int h=0, int m=0) : hora(h), minuto(m) {}
   
   void Mostrar();
   Tiempo operator+(Tiempo h);
       
  private:
   int hora;
   int minuto;
};

Tiempo Tiempo::operator+(Tiempo h) {
   Tiempo temp;
   
   temp.minuto = minuto + h.minuto;
   temp.hora   = hora   + h.hora;
   
   if(temp.minuto >= 60) {
      temp.minuto -= 60;
      temp.hora++;
   }
   return temp;
}

void Tiempo::Mostrar() {
   cout << hora << ":" << minuto << endl;
}

int main() {
   Tiempo Ahora(12,24), T1(4,45);
   
   T1 = Ahora + T1;   // (1)
   T1.Mostrar();
   
   (Ahora + Tiempo(4,45)).Mostrar(); // (2)
   
   return 0;
}