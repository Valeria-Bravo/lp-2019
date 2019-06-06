#include <iostream>
#include <vector>
using namespace std; 
int main ( )
{
 double * pd = new double [ 3 ] ;
 pd [ 2 ] = 2.2 ;
 pd [ 4 ] = 4.4 ;
 pd [ -3] = -3.3;
 double * p = new double ; 
 double * q = new double [ 1 0 0 0 ] ; 
 q [700] = 7.7 ; 
 q = p ; 
 double d = q [ 700 ] ;
}