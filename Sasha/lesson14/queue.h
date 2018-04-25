#ifndef QUEUE
#define QUEUE

class Queue {
    private:
        int *arr;
        unsigned int n;
        int top;
    public:
        Queue(unsigned int n = 0);
        Queue (const Queue& p);
        ~Queue();
        void print();
        void enqueue (int x);
        void dequeue ();
        bool isEmpty();
        bool isFull();
        unsigned int lenght();
};

#endif
