#include <iostream>
#include <string>
#include <algorithm>

std::string removeChars(std::string a, std::string unnecessaryChars) {
    std::string output;
    for(int i=0; i<a.size(); i++) {
        bool skip = false;
        for(int j=0; j<unnecessaryChars.size(); j++) {
            if(a[i]==unnecessaryChars[j]) {
                skip = true;
                break;
            }
        }
        if(!skip) {
            output+=a[i];
        }
    }
    return output;
}

bool checkPalindrom(std::string p) {
    for(int i=0; i<p.size(); i++) {
        if(p[i]!=p[p.size()-1-i]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::string p = "Ka... j?!!! A;;k";
    std::transform(p.begin(), p.end(), p.begin(), ::tolower);
    p = removeChars(p, ".;,-?!\"\' ");
    std::cout << (checkPalindrom(p)?"tak":"nie");

    return 0;
}
