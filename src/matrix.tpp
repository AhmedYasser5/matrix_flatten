#include "matrix.h"

// A constructor that creates the matrix
template <typename T>
matrix<T>::matrix(const int &n, const int &m, const int &p)
    : _n(n), _m(m), _p(p) {
  data = new T[_n * _m * _p];
}

// Destructor
template <typename T> matrix<T>::~matrix() { delete[] data; }

template <typename T>
int matrix<T>::convertIndex(const int &i, const int &j, const int &k) const {
  return k + _p * (j + _m * i);
}

template <typename T> T &matrix<T>::operator[](const int &ind) {
  return data[ind];
}

template <typename T> const T &matrix<T>::operator[](const int &ind) const {
  return data[ind];
}
