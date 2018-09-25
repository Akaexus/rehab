#include <iostream>
#include <vector>
#include <cmath>


int main() {
    int xd;
    std::vector <int> heh;
    std::cin >> xd;
    while(xd!=1) {
        for(int i=2; i<=xd; i++) {
            if(xd%i==0) {
                heh.push_back(i);
                xd = xd / i;
                break;
            }
        }
    }
    for(int i=0; i<heh.size(); i++) {
        std::cout << heh[i] << "\n";
    }
    return 0;
}
