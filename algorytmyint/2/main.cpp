#include <iostream>


int main() {
    int x1 = 1,
        x2 = 1,
        n;
    std::cin >> n;
    for(int i=0; i<n; i++) {
        std::cout << x2 << "\n";
        int temp = x1 + x2;
        x1 = x2;
        x2 = temp;
    }
    return 0;
}
