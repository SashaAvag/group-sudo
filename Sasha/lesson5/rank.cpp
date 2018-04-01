#include <iostream>

int rank (int n,int k) {
    if (k == 1) {
        return n;
    }
    else {
        k--;
        return n * rank (n,k);
    }
}

int main () {
    std::cout<<"Enter number: ";
    int n;
    std::cin>>n;
    std::cout<<"Enter rank of that number: ";
    int k;
    std::cin>>k;
    if (k > 0) {
        std::cout<<n<<" ^ "<<k<<" = "<<rank(n,k)<<std::endl;
    }
    else {
        std::cout<<"Enter rank between 1 and more numbers"<<std::endl;
    }
    return 0;
}
