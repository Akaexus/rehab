#include <iostream>
#include <map>

int main() {
  std::map <char, int> chars;
  std::string s = "LUBIE JESC PIEROGI I CEBULE";
  for(int i=0; i<s.size(); i++) {
    if(chars.end() != chars.find(s[i])) {
      chars[s[i]]++;
    } else {
      chars[s[i]] = 1;
    }
  }
  for(std::map<char, int>::iterator i = chars.begin(); i!=chars.end(); i++) {
    std::cout << i->first << " " << i->second << "\n";
  }
  return 0;
}
