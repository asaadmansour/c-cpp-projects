#ifndef STACK_H
#define STACK_H

#include <vector>

template <typename T>
class Stack {
private:
    std::vector<T> data;

public:
    Stack() = default;
    Stack(int size) { data.reserve(size); }

    void push(const T& value) { data.push_back(value); }

    void pop() { 
        if (!data.empty()) 
            data.pop_back(); 
    }

    void pop(T& out) {
        if (!data.empty()) {
            out = data.back();
            data.pop_back();
        }
    }

    bool isEmpty() const { return data.empty(); }

    bool isFull() const { return false; } 

    T peek() const { return data.back(); }

    int getSize() const { return data.size(); }

    void display() const {
        for (int i = data.size() - 1; i >= 0; --i)
            std::cout << data[i] << " ";
        std::cout << "\n";
    }
};

#endif
