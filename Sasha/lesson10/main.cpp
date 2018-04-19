#include <iostream>
#include "tangle.cpp"

int main () {
    std::cout << "Enter 3 coordinates x and y  " << std::endl;
    float a,b,c,d,e,f;
    std::cin >> a >> b >> c >> d >> e >> f;
    Point aa(a,b),bb(c,d),cc(e,f);
    Point cp = aa;
    std::cout << "_____Triangle_____" << std::endl;
    Triangle trl(aa,bb,cc);
    trl.printTr();
    std::cout <<"_____Rectangle_____" << std::endl;
    Rectangle rec(bb,aa);
    rec.printRec();
    std:: cout << "_____Line_____" << std::endl;
    Line ln(aa,cc);
    ln.printLn();
    std::cout << "_____Virtual functions_____" <<std::endl;
    Point P;
    Triangle T((1,2), (1,2), (1,2));
    Point* z = &P;
    z->foo();
    z->boo();
    Point* zz = &T;
    zz->foo();
    zz->boo();
    return 0;
}
