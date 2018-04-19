#include <iostream>
#include "Stack.cpp"

int main() {
    unsigned int n;
    std::cout << "Input the size of stack : ";
    std::cin >> n;
    Stack st(n);
    int a;
    st.push();
    st.print ();
    while (!st.isEmpty()) {
        std::cout << st.pop() << " , ";
    }
    st.print ();
    std::cout << std::endl;
    return 0;
}
