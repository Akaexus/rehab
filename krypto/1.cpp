#include <iostream>

std::string kryptoCezar(int offset, std::string s) {
  offset = offset%26;
  for(int i=0; i<s.size(); i++) {
    if(s[i]>=65 && s[i]<=90) {
      s[i]+=offset;
      if(s[i]>90) {
        s[i] = 65+s[i]%91;
      }
    } else if(s[i]>=97 && s[i]<=122) {
      int tmp = s[i];
      tmp+=offset;
      if(tmp>122) {
        tmp = 97+tmp%123;
      }
      s[i] = tmp;
    }
  }
  return s;
}
std::string dekryptoCezar(int offset, std::string s) {
  return kryptoCezar(26-offset, s);
}

int main() {
  std::cout << dekryptoCezar(12, kryptoCezar(12, "T4K 7Ak taG, to pan !! tik t4k__"));
}
