#include "matrix.h"
#include <iostream>

using namespace std;

int main() {
  int n, m, p;
  cin >> n >> m >> p;
  matrix<int> mat(n, m, p);
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      for (int k = 0; k < p; k++)
        mat[mat.convertIndex(i, j, k)] = i + j + k;
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      for (int k = 0; k < p; k++)
        cout << mat[mat.convertIndex(i, j, k)] << ' ';
  return 0;
}
