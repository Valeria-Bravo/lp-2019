#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;
int main() {
  cout << "Ingresa el tamaño de la primera matriz :" << endl;
  int x;
  cin >> x;
  int xx;
  cin >>xx;
  cout << "\nIngresa el tamaño de la segunda matriz:" << endl;
  int y;
  cin >> y;
  int yy;
  cin >> yy;

  if(xx != y) {
    cout << "\ERROR, NO ES POSIBLE LA MULTIPLICACION" << endl;
  }else{
    int a[x][y];
    int b[y][yy];
    int c[x][yy];
    int num_random;
    srand (time (NULL));
    cout << "Matriz 1" << endl;
    for(int w = 0; w < x; w++) {
      for(int h = 0; h < xx; h++) {
        num_random = rand() % 10;
        a[w][h] = num_random;
        cout << num_random << " ";
      }
      cout << endl;
    }
    cout << "Matriz 2 " << endl;
    for(int w = 0; w < y; w++) {
      for(int h = 0; h < yy; h++) {
        num_random = rand() % 10;
        b[w][h] = num_random;
        cout << num_random << " ";
      }
      cout << endl;
    }
    cout << "Matriz C, producto de A * B" << endl;
    for (int i = 0; i < x; i++) {
      for (int j = 0; j < yy; j++) {
        c[i][j] = 0;
        for (int k = 0; k < y; k++) {
          c[i][j] += a[i][k] * b[k][j];
        }
      }
    }
    for (int i = 0; i < x; i++) {
      for (int j = 0; j < yy; j++) {
        cout << c[i][j] << " ";
      }
      cout << endl;
    }
  }
  return 0;
}