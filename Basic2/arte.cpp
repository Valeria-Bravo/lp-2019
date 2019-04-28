#include <iostream>
using namespace std;
int main(){
	int t=0;
	for (int i=0; i<t; i++){
	int N;
  string R="NO";
  //cout<<"ingrese la longitud del lienso";
	cin>>N;
	int C;
	int l[N];
	while(N<3){
	 cout<<"ERROR, ingrese nuevamente el valor";
	cin>>N;
}
   //cout<<"Ingrese colores con los cuales pintara";
   for(int i=0;i<N;i++){
    cin>>C;
	l[i]=C;
   }
   //cout<<("Los lienzos son: ")<<endl;
   for(int i=0;i<N;i++){
   cout<<l[i];
   }
   for(int i=0;i<N-2;i++){
    if(l[i+1]==l[i] && l[i+1]==l[i+2]){
      R="SI";
    }
   }
    if (R=="si"){
     cout<<(R);
    }
    else{
     cout<<(R);
    }
    }
} 
