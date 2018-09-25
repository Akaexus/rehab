#include <iostream>

bool checkFunction(double a, double b, double x, double y) {
  return y==a*x+b;
}

int main() {
  std::cout << checkFunction(1, 1, 1, 2);
}
