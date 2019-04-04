#include<iostream>
using namespace std;
int main(){
  const double yen=0.090;
  const double euro=1.12;
  const double libra=1.30;
  double numero;
  char y1;
  char y2;
  double x;
  cout<<" Porfavor, ingrese el monto: ";
  cin>>numero;
  cout<<"Ingrese el valor para la conversion: y si es yen, e si es euro, l si es libra."<<endl;
  cout<<" Si es que desea cambiar de dolares a otras monedas ingrese la letra p "<<endl;
  cin>>y1;
  if (y1=='y'){
    x=numero*yen;
    cout<<"El valor es "<<x<<" dolares"<<endl;
    }
    else if (y1=='e'){
      x=numero*euro;
      cout<<"El valor es "<<x<<" dolares"<<endl;
  }
  else if (y1=='l'){
    x=numero*libra;
    cout<<"el valor es "<<x<<" dolares"<<endl;
  }
  else if (y1=='p') {
   cout<<"Ingrese la moneda para el cambio: ingrese y para yen, ingrese e para euro, ingrese l para libra"<<endl;
   cin>>y2;
   if (y2=='y'){
     x=numero/yen;
     cout<<"El valor es "<<x<<" yenes"<<endl;
   }
   else if (y2=='e'){
     x=numero/euro;
     cout<<"El valor es "<<x<<" euros"<<endl;
   }
   else if (y2=='l'){
     x=numero/libra;
     cout<<"El valor es "<<x<<" libras"<<endl;
    }
    else{
      cout<<"Lo snetimos, nuestro sistema no trabaja con eso tipo de digitos";
    }
  }
  else{
    cout<<"Lo sentimos, nuestro sistema n trabaja con estipo de digitos"<<endl;
  }
  
  return 0;
}
