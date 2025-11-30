#include "stack.h"
#include <iostream>
using namespace std;
Stack::Stack() {
    size = 10;
    top = -1;
    ptr = new int[size];
}
Stack::Stack(int input_size) {
    size = input_size;
    top = -1;
    ptr = new int[size];
}
Stack::~Stack() {
    delete[] ptr;
}
bool Stack::isFull() {
    return top == size - 1;
}
bool Stack::isEmpty() {
    return top == -1;
}
void Stack::push(int number) {
    if(isFull()) return;
    top++;
    ptr[top] = number;
}
void Stack::pop(){
    if(isEmpty()) return;
    top--;
}
void Stack::pop(int &x){
    if(isEmpty()) return;
    x = ptr[top];
    top--;
}
int Stack::peek() {
    return ptr[top];
}
int Stack::getSize() {
    return top+1;
}
void Stack::display() {
    for(int i=top;i>=0;i--) {
        cout << ptr[i] << " ";
    }
    cout << "\n";
}
Stack& Stack::operator=(const Stack& other) {
    if(this == &other) {
        return *this;
    }
    delete[] ptr;
    size = other.size;
    top = other.top;
    ptr = new int[size];
    for(int i = 0; i <= top; i++) {
        ptr[i] = other.ptr[i];
    }
    return *this;
}