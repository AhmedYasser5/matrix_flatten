#ifndef MATRIX_HEADER
#define MATRIX_HEADER

template <typename T> class matrix {
private:
  int _n, _m, _p;
  T *data;

public:
  matrix(const int &n, const int &m, const int &p);
  ~matrix();
  int convertIndex(const int &i, const int &j, const int &k) const;
  T &operator[](const int &ind);
  const T &operator[](const int &ind) const;
};

#include "matrix.tpp"

#endif
