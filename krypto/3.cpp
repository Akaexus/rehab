#include <iostream>
#include <vector>

std::string cryptoGrid(int rows, std::string s) {
  std::vector<std::vector<char>> grid;
  for(int i=0; i<rows; i++) {
    std::vector<char> row;
    grid.push_back(row);
  }
  for(int i=0; i<s.size(); i++) {
    grid[i%rows].push_back(s[i]);
  }
  std::string output="";
  for(int i=0; i<rows; i++) {
    for(int j=0; j<grid[i].size(); j++) {
      output+=grid[i][j];
    }
  }
  return output;
}


int main() {
  std::cout << cryptoGrid(2, "ALAMAKOTA");
}
