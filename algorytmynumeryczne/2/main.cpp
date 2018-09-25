#include <iostream>
#include <cstdlib>
#include <fstream>
#include <vector>

int main() {
    std::fstream file;
    file.open("liczby.txt", std::ios::in);
    std::vector<int> numbers;
    std::string number;
    if(file.good()) {
        while(getline(file, number)) {
            numbers.push_back(atoi(number.c_str()));
        }
        file.close();
        /*int max = numbers[0];
        int min = numbers[0];
        for(int i=1; i<numbers.size(); i++) {
            if(max<numbers[i]) {
                max=numbers[i];
            }
            if(min>numbers[i]) {
                min=numbers[i];
            }
        }*/
        std::vector <int> minNumbers;
        std::vector <int> maxNumbers;
        for(int i=0; i<numbers.size(); i+=2) {
            if(numbers[i]>numbers[i+1]) {
                maxNumbers.push_back(numbers[i]);
                minNumbers.push_back(numbers[i+1]);
            } else {
                maxNumbers.push_back(numbers[i+1]);
                minNumbers.push_back(numbers[i]);
            }
        }
        int max = maxNumbers[0];
        for(int i=1; i<maxNumbers.size(); i++) {
            if(maxNumbers[i]>max) {
                max = maxNumbers[i];
            }
        }

        int min = minNumbers[0];
        for(int i=1; i<minNumbers.size(); i++) {
            if(minNumbers[i]<min) {
                min = minNumbers[i];
            }
        }
        std::cout << "min " << min << "\n";
        std::cout << "max " << max << "\n";
    }
    return 0;
}
