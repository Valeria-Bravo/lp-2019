#include <iostream>
using namespace std;
int Saltos(int max) {
    int s=1;
    int d =1;
    int suma = 1;
    while(suma < max) {
        d =d+ 9;
        suma=suma+ d;
        s=s+1;
    }
    return s;
}
int main()
{
  cout << ("Ingresa la distancia que realizara el sapito: ")<<endl;
  int d;
  cin >> d;
  cout << ("El numero de saltos que dio es: ")<<Saltos(d) << endl;
  return 0;
}