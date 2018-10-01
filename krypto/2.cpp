#include <iostream>

std::string swapLetters(std::string s) {
  for(int i=0; i<s.size(); i+=2) {
    std::swap(s[i], s[i+1]);
  }
  return s;
}

int main() {
  std::cout << swapLetters("w szkole jest wybitnie cieplo");
}
