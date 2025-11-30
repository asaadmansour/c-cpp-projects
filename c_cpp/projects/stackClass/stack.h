#ifndef STACK_H
#define STACK_H
class Stack {
    private:
        int top;
        int size;
        int *ptr;
    public:
    Stack();
    Stack(int size);
    ~Stack();
    void push(int number);
    void pop();
    void pop(int &x);
    bool isEmpty();
    bool isFull();
    int peek();
    int getSize();
    void display();
    Stack& operator=(const Stack& other);
};
#endif