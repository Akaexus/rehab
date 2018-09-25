#include <iostream>

int checkIfPointInSegment(double Ax, double Ay, double Bx, double By, double x, double y) {
  int a = (By-Ay)/(Bx-Ax),
      b = Ay-a*Ax;
      return y==a*x+b && y>=std::min(Ay, By) && y<=std::max(Ay, By);
}

int main() {
  std::cout << checkIfPointInSegment(2, 1, 3, 2, 2.5, 1.5);
  return 0;
}
