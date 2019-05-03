#include <iostream>
using namespace std; 
int main ( )
try
{
    int x =-1;
    int y = 2 ;
    int z = 4 ;
    int area1 = area( x , y ) ;
    int area2 = framed_area ( 1 , z ) ;
    int area3 = framed_area ( y , z ) ;
    double ratio = double ( area1 )/area3 ;
}
catch (exception& e ) {
  cerr<< "error : " << e . what ( ) << " \n " ;
  return 1 ;
}
