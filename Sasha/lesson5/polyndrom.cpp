#include <iostream>
#include <cstring>

char pol (char w) {
   // w = w / 10;
    return w;
}
int main () {
    std::cout<<"Enter the word: ";
    char w;
    std::cin>>w;
    std::cout<<pol (w);
    return 0;
}
