#include <iostream>
#include "vector.h"

Vector::Vector (ul n) {
        this->n = n;
        top = -1;
        arr = new int [n * 2];
}
Vector::Vector (const Vector& p ) {
        this->n = p.n;
        this->arr = new int[n];
        n = p.n;
        for (int i = 0; i < n; i ++) {
            arr[i] = p.arr[i];
        }
}
Vector::~Vector (){
        delete []arr;
}
int Vector::size () {
        return (top + 1);
}
bool Vector::isEmpty () {
        return size() == -1;
}
bool Vector::isFull() {
        return size() == n;
}
int Vector::getLast () {
        return arr[top];
}
int Vector::getFirst () {
        return arr[0];
}
void Vector::push (int x) {
        if (!isFull()) {
            arr[++top] = x;
        }else {
            std::cout << "You have no area for that , do pop()! \n";
        }
}
void Vector::pop () {
        if (isEmpty()) {
            std::cout << "Vector is empty" << std::endl;
        }else {
            for (int i = 0; i <= top; i++) {
                if (i == top){
                    top = i - 1;
                    break;
                }
                arr [i] = arr [i + 1];
            }
        }
}
void Vector::resize(int m) {
        if ( m == n) {
            std::cout << "No logics to do that! \n";
        }
        else if (m < n) {
            std:: cout << "Deleted sum numbers!!! \n";
        }
        else if ( m > n ) {
            n = m;
            _arr = new int [n * 2];
            for (int i = 0; i <= top; i++){
                _arr[i] = arr[i];
            }
            delete []arr;
            arr = _arr;
        }
}
void Vector::print() {
        if (isEmpty()){
            std::cout << "Vector is empty \n";
        }else {
            int _top = top;
            for (;_top != -1; --_top){
                std::cout << arr[_top] << " ";
            }
            std::cout << "\n";
        }
}
int Vector::operator[] (unsigned int in) {
    if (in >= 0 && in <= top){
        return arr[in];
    }
    std::cout << "Error!! \n";
}
void Vector::remove (unsigned int in ) {
    if (in >= 0 && in <= top) {
        for ( int i = in; i <= top; i++) {
            if (i == top) {
                top = i -1;
                break;
            }
            arr[i] = arr[i + 1];
        }
    }
}
