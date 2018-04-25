#include <iostream>
#include "queue.h"

int main () {
    unsigned int n;
    std::cout << "Enter size of Queue: ";
    std::cin >> n;
    Queue q(n);
    while (n) {
        std::cout << "Enter number: ";
        int x;
        std::cin >> x;
        q.enqueue(x);
        n--;
    }
    q.print();
    std::cout << "Quantity of Queue: " << q.lenght() <<std::endl;
    q.dequeue();
    q.print();
    std::cout << "Quantity of Queue: " << q.lenght() <<std::endl;

}
