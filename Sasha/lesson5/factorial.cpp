#include <iostream>
long int fac (long int n) {
	if (n == 1) {
		return n;
	}
	else {
		return n * fac(n-1);
	}
}
int main () {
    long int n;
    std::cout<<"Enter number: ";
	std::cin>>n;
	std::cout<<n<<"! = "<<fac(n)<<std::endl;
	return 0;
}
