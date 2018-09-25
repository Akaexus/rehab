#include <iostream>
#include <vector>

int main() {
    int notes[] = {200, 100, 50, 20, 10, 5, 2, 1};
    int notesCount = sizeof(notes)/sizeof(*notes);
    int cash;
    std::vector<int> change;
    std::cin >> cash;
    while(cash) {
        for(int i=0; i<notesCount; i++) {
            if(notes[i]<=cash) {
                change.push_back(notes[i]);
                cash-=notes[i];
                break;
            }
        }
    }
    for(int i=0; i<change.size(); i++) {
        std::cout << change[i] << "\n";
    }
    return 0;
}
