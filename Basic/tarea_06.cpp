#include <iostream>
using namespace std;
int square(int f)
{int c=0;
for(int i=0;i<f;i++){
  c=c+f;
}
return c;
}
int main() {
cout<<"Ingrese numero q desea elevar al cuadrado: ";
int c;
cin>>c;
cout<<square(c);
}