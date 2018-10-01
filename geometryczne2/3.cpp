#include <iostream>
#include <fstream>
#include <map>

int main() {
  std::map <char, std::string> chars = {
    {' ', "000"},
    {'B', "001"},
    {'C', "1000"},
    {'E', "01"},
    {'G', "10010"},
    {'I', "101"},
    {'J', "10011"},
    {'L', "1100"},
    {'O', "11010"},
    {'P', "11011"},
    {'R', "11100"},
    {'S', "11101"},
    {'U', "11111"}
  };
  std::string s = "LUBIE JESC PIEROGI I CEBULE";
  std::string output = "";
  for(int i=0; i<s.length(); i++) {
    output += chars[s[i]];
  }
  std::fstream file;
  file.open("zakodowane.txt", std::ios::out);
  if(file.good()) {
    file << output;
    file.close();
  }
  return 0;
}
