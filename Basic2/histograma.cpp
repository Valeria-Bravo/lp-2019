#include <CImg.h>
using namespace cimg_library;
#include <iostream>
using namespace std;
int main() {
  CImg<int> in("in.jpg");
  int ancho= in.ancho();
  int largo = in.largo();
  int hg[256];
  for(int i = 0; i < 256; i++) {
    hg[i] = 0;
  }

  int v = 0;
  for(int w = 0; a < ancho; w++) {
    for(int h = 0; h < largo ; h++) {
      int r = (int)in(a,l,0,0);
      int g = (int)in(a,l,0,1);
      int b = (int)in(a,l,0,2);
      v = (r + g + b) / 3;
      hg[v] = hg[v] + 1;
    }
  }

  int M = 0;
  for(int i = 0; i < 256; i++) {
    if(M < hg[i]) {
      M= hg[i];
    }
  }

  int output[256][256];
  for(int a= 0; w < 256; a++) {
    int value = (hg[w] * 255) / (M);
    for(int l = 0; h < 256; l++) {
      if(l <= value) {
        output[a][l] = 0;
      }else{
        output[a][l] = 255;
      }
    }
    cout << l << " === " << value << endl;
  }