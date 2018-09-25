#include <iostream>

double f(double x) {
    return x*x*x-3*x*x+2*x-20;
}

int main() {
    double a = -10,
        b = 10;
    for(;;) {
        double mid = (a+b)/2;
        //std::cout << " = "<< a << "=" << f(a) << "  " << mid << "=" << f(mid) << "  " << b << "=" << f(b) << "\n";
        if(f(a)*f(mid)<0) {
            b = mid;
           // std::cout << "left \n";
        } else {
            a = mid;
           // std::cout << "right \n";
        }
        if(b-a<0.000001) {
            break;
        }
    }
    std::cout << (a+b)/2;
    return 0;
}
