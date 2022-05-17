#include "matrix.h"
#include <iostream>

using namespace std;

int main() {
  int n, m, p;
  cin >> n >> m >> p;

  int ***data = new int **[n];
  cout << "\nThe first 3d matrix created by hand is:\n{\n";
  for (int i = 0; i < n; i++) {
    data[i] = new int *[m];
    for (int j = 0; j < m; j++) {
      data[i][j] = new int[p];
      cout << '\t';
      for (int k = 0; k < p; k++) {
        data[i][j][k] = i + j + k;
        cout << data[i][j][k] << ' ';
      }
      cout << endl;
    }
    if (i != n - 1)
      cout << ",\n";
  }
  cout << '}';

  matrix<int> mat(n, m, p, data);
  cout << "\n\nThe second 3d matrix created from the one that was created by "
       << "hand is:\n{\n";
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << '\t';
      for (int k = 0; k < p; k++)
        cout << mat(i, j, k) << ' ';
      cout << endl;
    }
    if (i != n - 1)
      cout << ",\n";
  }
  cout << "}\n";

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++)
      delete[] data[i][j];
    delete[] data[i];
  }
  delete[] data;

  return 0;
}
