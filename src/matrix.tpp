template <typename T>
matrix<T>::matrix(const int &n, const int &m, const int &p)
    : _n(n), _m(m), _p(p) {
  _data = new T[_n * _m * _p];
}

template <typename T>
matrix<T>::matrix(const int &n, const int &m, const int &p, T ***data)
    : matrix(n, m, p) {
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      for (int k = 0; k < p; k++)
        (*this)(i, j, k) = data[i][j][k];
}

template <typename T> matrix<T>::~matrix() { delete[] _data; }

template <typename T>
T &matrix<T>::operator()(const int &i, const int &j, const int &k) {
  return _data[k + _p * (j + _m * i)];
}

template <typename T>
const T &matrix<T>::operator()(const int &i, const int &j, const int &k) const {
  return _data[k + _p * (j + _m * i)];
}

template <typename T> T &matrix<T>::operator[](const int &y) {
  return _data[y];
}

template <typename T> const T &matrix<T>::operator[](const int &y) const {
  return _data[y];
}
