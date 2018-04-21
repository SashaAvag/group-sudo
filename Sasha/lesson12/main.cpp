#include <iostream>
#include "shape.cpp"

int main () {
    std:: cout << "Enter 3 coordinates " << std::endl;
    int a, b, c, d, e, f;
    std::cin >> a >> b >> c >> d >> e >> f;
    Point aa(a,b), bb(c,d), cc(e, f);
    
    Triangle tr(aa,bb,cc);
    std::cout << "______Triangle_____ " << std::endl;
    printS(&tr);
    printP(&tr);
    std::cout << "______Rectangle_____ " << std::endl;
    Rectangle rec(aa,bb);
    printP(&rec);
    printS(&rec);
    return 0;
}
