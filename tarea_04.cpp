#include <iostream>
using namespace std;
char c='a';
int ia=int(c);
int main () {
  while(c<='z'){ 
  cout<<c<<" "<<int(c)<<endl;
  c=c+1;
  }
}