#include <iostream>
#include "vector.h"

int main () {
    std::cout << "Size of Vector: ";
    unsigned int n ;
    std::cin >> n;
    Vector v(n);
    while (n){
        std::cout << "Enter number: ";
        int x;
        std::cin >> x;
        v.push(x);
        n--;
    }
    v.pop ();
    std::cout <<"First number: " << v.getFirst() << std::endl;
    std::cout <<"Last number: " << v.getLast() << std::endl;
    std::cout << "Change the size of vector: ";
    std::cin >> n;
    v.resize(n);
    v.push(25);
    v.push(26);
    v.print();
    std::cout <<"First number: " << v.getFirst() << std::endl;
    std::cout <<"Last number: " << v.getLast() << std::endl;
    std::cout << "Enter index for finding element: ";
    std::cin >> n;
    std::cout << v.operator[](n) << "\n";
    std::cout << "Enter index for removing element: ";
    std::cin >> n;
    v.remove (n);
    v.print();
    return 0;
}

