#include "lib.h"
#include <cstring>
#include <iostream>

void maths() {
  GoFloat64 sqrt = Sqrt(25.0);
  std::cout << "sqrt(25.0)=" << sqrt << std::endl;
  GoFloat64 pow = Pow(5, 3);
  std::cout << "power(5, 3)=" << pow << std::endl;
}

void request(const char *s) {
  GoString str;
  str.p = s;
  str.n = strlen(str.p);
  int r = Request(str);
  std::cout << "http.Get(" << str.p << ")=" << r << std::endl;
}

int main() {
  maths();
  request("https://xnacly.me/5");
  request("https://xnacly.me/about");
  Routines(1024);
}
