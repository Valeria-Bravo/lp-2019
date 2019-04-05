#include<iostream>

using namespace std;
int main(){
	cout<<"Ingrese los numeros seguidos de espacio"<<endl;
	int x,y,z;
  cin>>z>>y>>x;
  
	int mayor, medio, menor;
	mayor=z;
	medio=y;
	menor=x;
	
	
		if(x>y){
			menor=y;
			medio=x;
		}
		if(x>z){
			mayor=x;
			menor=z;
		}
		if(y>z){
			mayor=y;
			medio=z;
		}
	
		cout<<"mayor es "<<x<<endl;
		cout<<"medio es "<<y<<endl;
		cout<<"menor es "<<z<<endl;
	
}