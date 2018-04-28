#include <iostream>
#include "DList.h"


int main() {
    std::cout << "Enter size of list: ";
    unsigned int s;
    std::cin >> s;
    List list(s);
    for(int i = 0; i < s; ++i) {
        list.pushFront(i);
    }
    list.print();
    std::cout << "\n";
    list.insert(10,3);
    list.print();
    std::cout << "\n";
    list.remove(3);
    list.print();

    return 0;
}
