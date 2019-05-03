#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int numero_random[4];
	int numeros_ingresados[4];
	int v=0;
	int t=0;
	srand (time (NULL));
	int r = rand() % 10;
    numero_random[0] = r;
    r = rand() % 10;
    numero_random[1] = r;
    r = rand() % 10;
    numero_random[2] = r;
    r = rand() % 10;
    numero_random[3] = r;
  
    cout<<"ingresa el numero 1:";
    cin>>numeros_ingresados[0];
    cout<<"ingresa el numero 2:";
    cin>>numeros_ingresados[1];
    cout<<"ingresa el numero 3:";
    cin>>numeros_ingresados[2];
    cout<<"ingresa el numero 4:";
    cin>>numeros_ingresados[3];
  
    for(int i = 0; i < 4; i++) {
    	if(numero_random[i] == numeros_ingresados[i]) {
    		t=t+1;
    	}
    	for(int j = 0; j < 4; j++) {
    		if(i != j && numero_random[j] == numeros_ingresados[i]) {
    			v=v+1;
            }
        }
    }
    cout << numero_random[0] << " " << numero_random[1] << " " << numero_random[2] << " " << numero_random[3] << endl;
    cout << numeros_ingresados[0] << " " << numeros_ingresados[1] << " " << numeros_ingresados[2] << " " << numeros_ingresados[3] << endl;
    cout<<"toros: "<<t<<", vacas: "<<v<<endl;
	return 0;
}