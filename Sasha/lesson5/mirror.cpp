#include <iostream>

int mirror (int n) {
    if ((n / 10) == 0) {
        std::cout<<n;
    }else {
        std::cout<<(n % 10);
        return mirror (n/10);
    }
}
int main () {
    std::cout<<"Enter number: ";
    int n;
    std::cin>>n;
    std::cout<<n<<" mirror image = ";
    mirror(n);
    std::cout<<std::endl;
    return 0;
}
