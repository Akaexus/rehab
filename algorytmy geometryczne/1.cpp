#include <iostream>

bool canBuildTriangle(double a, double b, double c) {
  return a+b>c && a+c>b && b+c>a;
}

int main() {
  std::cout << canBuildTriangle(51, 4, 50);
}
