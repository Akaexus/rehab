#include <iostream>


int nwd(int a, int b) {
    while(b) {
        int r = a%b;
        a = b;
        b = r;
    }
    return a;
}

int nww(int a, int b) {
    return a*b/nwd(a, b);
}

int main() {
    std::cout << nww(12, 8);
    return 0;
}
