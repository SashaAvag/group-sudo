#include <iostream>

int count (int n) {
	if (n == 1){
		std::cout<<n;
	}
	else {
		std::cout<<n<<",";
		return  count (n-1);
	}
}

int main () {
	int n;
	std::cout<<"Enter number: ";
	std::cin>>n;
    std::cout<<"count "<<n<<" - 1 numbers: ";
	count (n);
	std::cout<<std::endl;
	return 0;
}
