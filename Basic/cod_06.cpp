#include <iostream>
using namespace std;

int main() 
{
   if (unit=='i')
    cout<<length<<"in--"<<cm-per-inch*length<<”cm\n”
   else if (unit=='c')
    cout<<length<<"cm--"<<length/cmperinch<< "in/n”;
   else  
    cout<<"Lo siento, no conozco una unidad llamada"<<unit<<"\n";
}