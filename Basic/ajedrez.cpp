#include <iostream>
using namespace std;
int cambiar(int f,int c, int m){
	int z,y,r,s;
  z=f-m;
	f=f+m;
	y=c-m;
	c=c+m;
  if(z<1)z=1;
	if(y<1)y=1;
	if(f>8)f=8;
	if(c>8)c=8;
	return (c-y+1)*(f-z+1);
}
int main() {
int f,c,m;
int i=0;
cout<<"Ingrese la posicion de fila:"<<endl;
cin>>f;
cout<<"Ingrese la posicion de columna:"<<endl;
cin>>c;
cout<<"Ingrese el numero de movimientos: "<<endl;
cin>>m;
if(m<1){cout<<"La minima cantidad de movimientos es 1:";return 0;}
if(f<1){cout<<"Las filas van de 1 a 8";return 0;}
if(c<1){cout<<"Las columnas van de 1 a 8";return 0;}
if(f>8){cout<<"Las filas van de 1 a 8";return 0;}
if(c>8){cout<<"Las columnas van de 1 a 8";return 0;}
if(m>8)return 64;
cout<<"la respuesta es  "<<endl;
cout<<cambiar(f,c,m);
return 0;
}