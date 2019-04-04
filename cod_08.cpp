#include<iostream>
using namespace std;
int main() {
  const double yen=0.090;
  const double euro=1.12;
  const double libra=1.30;
  const double yuan=0.1492;
  const double shekels=0.27757;
  double numero;
  char y1;
  char y2;
  double x;
  cout<<" Porfavor, ingrese el monto: ";
  cin>>numero;
  cout<<"Ingrese el valor para la conversion: y si es yen, e si es euro, l si es libra, ingrese u para yuan y por ultimo ingrese s para shekels"<<endl;
  cout<<" Si es que desea cambiar de dolares a otras monedas ingrese la letra p "<<endl;
  cin>>y1;
  switch (y1) {
  case 'y':
    x=numero*yen;
    cout<<"El valor es "<<x<<" yenes"<<endl;
    break;
  case'e':
    x=numero*euro;
    cout<<"El valor es "<<x<<" euros"<<endl;
    break;
  case 'l':
    x=numero*libra;
    cout<<"el valor es "<<x<<" libras"<<endl;
    break;
  case 'u':
    x=numero*yuan;
    cout<<" el valor es"<<x<<"yuanes"<<endl;
    break;
  case 's':
    x=numero*shekels;
    cout<<" el valor es"<<x<<"shekels"<<endl;
    break;
  default :
    cout<<"Lo sentimos, nuestro sistema no trabaja con este tipo de digitos"<<endl;
     break;

  case 'p':
   cout<<"Ingrese la moneda para el cambio: ingrese y para yen, ingrese e para euro, ingrese l para libra, ingrese u para yuan y por ultimo ingrese s para shekels"<<endl;
   cin>>y2;
    switch (y2) {
    case 'y':
      x=numero/yen;
      cout<<"El valor es "<<x<<" yenes"<<endl;
      break;
    case 'e':
      x=numero/euro;
      cout<<"El valor es "<<x<<" euros"<<endl;
      break;
    case 'l':
      x=numero/libra;
      cout<<"El valor es "<<x<<" libras"<<endl;
      break;
      case 'u':
      x=numero/yuan;
      cout<<"El valor es "<<x<<" yuanes"<<endl;
      break;
      case 's':
      x=numero/shekels;
      cout<<"El valor es "<<x<<" shekels"<<endl; 
      break;
    default :
      cout<<"Lo sentimos, nuestro sistema no trabaja con este tipo de digitos"<<endl;
      break;
      }
    }
  
    return 0;
}
