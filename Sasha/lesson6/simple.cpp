#include <iostream>
int Globali = 2;
inline int simple (int n) {
    if ( Globali < (n / 3)) {
        if (n % Globali == 0) {
            return 0;
        }
        else 
        if (Globali == (n / 3)) {
            return n;
        }
        else {
            Globali++;
            return simple (n);
        }
    }
}

int main () {
    int n;
    std::cout<<"Enter number: ";
    std::cin>>n;
    if (n >= 10){
        if (simple (n)) {
            std::cout<<n<<" is simple number"<<std::endl;
        }
        else {
            std::cout<<n<<" is not simple"<<std::endl;
        }
    }
    else {
        std::cout<<"Choose number between 10 and more "<<std::endl;
    }
    return 0;
}
