#include <iostream>
class Stack {
    private:
        int *arr;
        int top;
        unsigned int n;
    public:
	    Stack(int n = 10) 
            :n(n) {
            top = -1;
            arr = new int [n];
        }
	    int size() {
            return top;
        }
        bool isEmpty() {
            return (size() == -1);
        }
        bool isFull() {
            return (size() == (n -1));
        }
        void setN(int n) {
            this->n = n;
        }
	    void setTop(int top) {
            this->top = top;
        }
        int getN() {
            return n;
        }
        int getTop() {
            return top;
        }
        ~Stack() {
            delete []arr;
        }
        void push() {
	        while (!isFull()) {
                int a;
                std::cout << "Input number : ";
                std::cin >> a;
                arr[++top] = a;
            }
        }
        int pop() {
            if (size() >= 0) {
                return arr[top--];
            }
            else {
                std::cout << "Stack is empty!" <<std::endl;
                return -1;
            }
        }
        void print() {
            if (isEmpty()) {
                std::cout << "Stack is empty" <<std::endl;
            }
            else {
                while (top != -1) {
                    std::cout << arr[top] << " ";
                    top --;
                }
                std::cout << '\n';
            }
        }
};

