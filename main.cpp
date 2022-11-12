#include <iostream>
#include "imaginarynumber.hpp"

int main() {
  
  ImaginaryNumber a = ImaginaryNumber(-1, -2);
  ImaginaryNumber b = ImaginaryNumber(1, 2);

  ImaginaryNumber c = a * b;
  std::cout << c << std::endl;
}
