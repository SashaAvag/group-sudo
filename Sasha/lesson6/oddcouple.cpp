#include <iostream>

int couple(int n) {
    if (n == 1) {
        std::cout<<":"<<std::endl;
    } else if (n % 2 == 0) {
        std::cout<<n<<" ";
        return couple (n - 1);
    } else {
        return couple (n - 1);
    }
}

int odd (int n) {
    if (n == 1) {
        std::cout<<n<<":"<<std::endl;
    } else if (n % 2 != 0) {
        std::cout<<n<<" ";
        return odd (n - 1);
    } else {
        return odd (n - 1);
    }
}

int main () {
    int n;
    std::cout<<"Enter number: ";
    std::cin>>n;
    std::cout<<n<<" - 1 couple numbers: ";
    couple (n);
    std::cout<<n<<" - 1 odd numbers: ";
    odd (n);
    return 0;
}
