#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

struct Student {
  std::string name;
  double grade;
};

//0 - a>b
//1 - a<b
//2 - a=b
int compare(std::string a, std::string b) {
  if(a==b) {
    return 2;
  }
  int maxLength = std::max(a.size(), b.size());
  for(int i=0; i<maxLength; i++) {
    if(a[i]<b[i]) {
      return false;
    }
  }
  return true;
}

int main() {
  std::vector <Student> students = {
    {"Kowalski", 3.12},
    {"Kasprowicz", 4.40},
    {"Nowak", 6.00},
    {"Kosak", 5.44},
    {"Nasiadka", 5.32},
    {"Nowicki", 3.44},
    {"Kanigowski", 4.00},
    {"Danusiak", 4.00},
    {"Dwornik", 4.20},
    {"Kaspro", 3.00},
    {"Kasprowicz", 4.00},
    {"Kasprowicz", 3.10},
    {"Danusiak", 2.00},
    {"Danusiak", 2.14}
  };
  for(int i=0; i<students.size(); i++) {
    for(int j=1; j<students.size(); j++) {
      if(students[j-1].name > students[j].name) {
        std::swap(students[j-1], students[j]);
      }
    }
  }
  int changedAnything = false;
  do {
    changedAnything = false;
    for(int j=1; j<students.size(); j++) {
      if(students[j-1].name == students[j].name && students[j-1].grade<students[j].grade) {
        std::swap(students[j-1], students[j]);
      }
    }
  } while(changedAnything);
  for(int i=0; i<students.size(); i++) {
    std::cout << students[i].name << " - " << students[i].grade << "\n";
  }
}
