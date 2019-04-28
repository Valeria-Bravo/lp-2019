#include <iostream>
#include <string>
using namespace std;
int main()
{
	int c;
	int p;
	int z = 1;
	int cc= 0;
	int ca = 0;
	int x;
  cout<<"Ingrese el número de jugadores"<<endl;
	cin>>x;
	for (int y=0;y<x;y++){
		 cin>>c;
		 for (int x=0;x < c;x++){
				cin>>p;
				if (x >= 1){ 
					if (p != z){ 
						if (ca == 0){  
							cc = cc + 2;
							ca = 1; 
						} else {
							cc = cc +1; 
						}
					} else {
						ca = 0;
					}
				} 
				z = p;
		}
		cout<<"La cantidad de sospechosos es: "<<cc<<endl;
		cc = 0;
		ca= 0;
	}
}