#pragma once

template <typename T> class matrix {
private:
  int _n, _m, _p;
  T *_data;

public:
  matrix(const int &n, const int &m, const int &p);
  matrix(const int &n, const int &m, const int &p, T ***data);
  ~matrix();

  T &operator()(const int &i, const int &j, const int &k);
  const T &operator()(const int &i, const int &j, const int &k) const;

  T &operator[](const int &y);
  const T &operator[](const int &y) const;
};

#include "matrix.tpp"
