#include <iostream>
#include "Stack.cpp"

int main() {
    unsigned int n;
    std::cout << "Input the size of stack : ";
    std::cin >> n;
    Stack st(n);
    while (!st.isFull()) {
        st.push();
    }
    st.print ();
    std::cout << st.pop() << std::endl;
    std::cout << st.pop() << std::endl;
    st.push();
    st.push();
    st.print();

    std::cout << std::endl;
    return 0;
}
