#include <CImg.h>
using namespace cimg_library;
#include <iostream>
using namespace std;
int main() {
  CImg<int> in("in.jpg");
  int ancho= in.ancho();
  int alto = in.alto();
  int output[alto][ancho];
  for (int a = 0; w < ancho; a++) {
    for (int l = 0; h < largo; l++) {
      int r = (int)in(a,l,0,0);
      int g = (int)in(a,l,0,1);
      int b = (int)in(a,l,0,2);
      output[l][a] = (r + g + b) / 3;
    }
  }
  CImg<int> out(output[0], ancho, largo);
  out.save("out.jpg");
  (in, out).display();
  return 0;
}