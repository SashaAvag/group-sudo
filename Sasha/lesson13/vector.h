#ifndef VECTOR
#define VECTOR
class Vector {
    private:
        typedef unsigned long int ul;
        ul n;
        int *arr;
        int *_arr;
        int top;
    public:
        Vector(ul n = 0);
        Vector(const Vector& p);
        ~Vector();
        int size();
        bool isEmpty();
        bool isFull();
        int getFirst();
        int getLast();
        void push(int x);
        void pop();
        void resize(int m);
        void print();
        int operator[] (unsigned int in);
        void remove (int unsigned in);
    
};

#endif VECTOR
