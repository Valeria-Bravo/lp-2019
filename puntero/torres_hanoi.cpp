#include <iostream>
#include <math.h>
using namespace std;

void Hanoi(int num,char o,char d,char aux)
{

	if(num==1)
	{
			cout<<"Mueva el disco "<<num<<" desde "<<o<<" hasta  "<<d<<endl;
			
	}
	else
	{
		Hanoi(num-1,o,aux,d);
	    cout<<"Mueva el disco "<<num<<" desde "<<o<<" hasta  "<<d<<endl;
	    Hanoi(num-1,aux,d,o);
	}
	
}
int main()
{
		int cant,movs;
		char A,B,C;
		int resultado;
		cout<<"Numero de discos: ";
		cin>>cant;
		resultado = (pow(2,cant)-1);
		Hanoi(cant,'A','C','B');
		cout<<"La cantidad de movimientos es: "<<resultado<<endl;
		return 0;
		
}