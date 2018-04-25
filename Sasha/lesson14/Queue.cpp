#include <iostream>
#include "queue.h"

Queue::Queue(unsigned int n)
    :top(-1), n(n) 
    {
        arr = new int [n];
    }
Queue::Queue(const Queue& p)
    {
        this->n = p.n;
	    this->arr = new int [n];
    	for (int i = 0; i < n; i++) {
            arr[i] = p.arr[i];
        }
    }
Queue::~Queue() {
    delete []arr;
}
bool Queue::isEmpty () {
    return (top == -1);
}
bool Queue::isFull () {
    return (top == (n - 1));
}
void Queue::print () {
    for (int i = 0; i <= top; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}
void Queue::enqueue (int x ){
    if (!isFull()) {
        arr[++top] = x;
    }else {
        std::cout << "Queue if full! \n";
    }
}
void Queue::dequeue () {
    for ( int i = 0; i <= top; i++ ) {
        if ( i == top){
            top = i -1;
            break;
        }
            arr[i] = arr[ i + 1 ];
    }
}

unsigned int Queue::lenght () {
    return (top + 1);
}


