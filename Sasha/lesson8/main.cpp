#include <iostream>
#include "class.cpp"

int main () {
    std::cout << "Enter 3 coordinates x and y for Triangle " << std::endl;
    float a,b,c,d,e,f;
    std::cin >> a >> b >> c >> d >> e >> f;
    Triangle trl(a,b,c,d,e,f);
    trl.printTr();
    std::cout <<"Enter 2 coordinates for rectangle " << std::endl;
    std::cin >> a >> b >> c >> d;
    Rectangle rec(a,b,c,d);
    rec.printRec();
    return 0;
    }
