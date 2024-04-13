#include "lib.h"
#include <cstring>
#include <iostream>

void maths() {
  GoFloat64 sqrt = Sqrt(25.0);
  std::cout << "sqrt(25.0)=" << sqrt << std::endl;
  GoFloat64 pow = Pow(5, 3);
  std::cout << "power(5, 3)=" << pow << std::endl;
}

void goroutines() { Routines(7); }

void request() {
  GoString str;
  str.p = "https://xnacly.me";
  str.n = strlen(str.p);
  int r = Request(str);
  std::cout << "http.Get(" << str.p << ")=" << r << std::endl;
}

int main() {
  maths();
  request();
  goroutines();
}
