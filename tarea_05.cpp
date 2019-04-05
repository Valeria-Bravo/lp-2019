#include <iostream>
using namespace std;
char c='a';
int ia=int(c);
int main (){
  for ( c='0'; c<='9';c++){
  cout<<c<<" "<<int(c)<<endl;
  }
  for ( c='a'; c<='z';c++){
  cout<<c<<" "<<int(c)<<endl;
  }
  for ( c='A'; c<='Z';c++){
  cout<<c<<" "<<int(c)<<endl;
  }
}