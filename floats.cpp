#include<iostream> // std::cout
#include<limits>   // std::numeric_limits

template<typename T>
void print_limits() {
  std::cout << std::boolalpha;
  std::cout << "Minimum value: " << std::numeric_limits<T>::min() << '\n';
  std::cout << "Maximum value: " << std::numeric_limits<T>::max() << '\n';
  std::cout << "Is signed: " << std::numeric_limits<T>::is_signed << '\n';
  std::cout << "significant bits: " << std::numeric_limits<T>::digits << '\n';
  std::cout << "has infinity: " << std::numeric_limits<T>::has_infinity << '\n';
  std::cout << "base 10 digits: " << std::numeric_limits<T>::digits10 << '\n';
  std::cout << "machine epsilon: " << std::numeric_limits<T>::epsilon() << '\n';
}


int main () {

  std::cout<<"Numerical Limits of Float"<<std::endl;
  print_limits<float>();

  std::cout<<"Numerical Limits of Double"<<std::endl;
  print_limits<double>();

  std::cout<<"Numerical Limits of Long Double"<<std::endl;
  print_limits<long double>();

  return 0;
}
