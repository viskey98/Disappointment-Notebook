struct X {
  int i{};  
};
bool X_less(X const &l, X const &r) { return l.i < r.i; }
// ...
std::sort(vec_X.begin(), vec_X.end(), &X_less);
