#include <iostream>

double f(double x) {
    return x*x+x+2;
}

 int main() {
    double a = -10, b = 10;
    double area = 0;
    double step = (std::abs(a)+std::abs(b))/10000;
    for(double i=a; i<(b-step); i+=step) {
        double minHeight = std::min(f(i), f(i+step));
        double maxHeight = std::max(f(i), f(i+step));
        area+=minHeight*step+(step*(maxHeight-minHeight))/2;
    }
    std::cout << area;
    return 0;
}
