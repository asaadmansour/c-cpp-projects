#ifndef LIST_H
#define LIST_H
#include <stdexcept>

enum Type {
        INT,
        FLOAT,
        STRING,
        BOOL
    };

class ElementWrapper {
private:
    void* data;
    Type dataType;
    
public:
    ElementWrapper(void* d, Type t) : data(d), dataType(t) {}
    operator int() const {
        if(dataType != INT) 
            throw std::runtime_error("Cannot convert to int: element is not an int");
        return *(int*)data;
    }
    
    operator float() const {
        if(dataType != FLOAT) 
            throw std::runtime_error("Cannot convert to float: element is not a float");
        return *(float*)data;
    }
    
    operator char*() const {
        if(dataType != STRING) 
            throw std::runtime_error("Cannot convert to char*: element is not a string");
        return (char*)data;
    }
    
    operator bool() const {
        if(dataType != BOOL) 
            throw std::runtime_error("Cannot convert to bool: element is not a bool");
        return *(bool*)data;
    }
};

class List {
private:
    static constexpr int INITIAL_SIZE = 16; 
    struct Element {
        void* data;
        Type dataType;  
    };
    Element* elements;
    int size;
    int capacity;
    void resize();
    bool isInteger(const char* str);
    bool isFloat(const char* str);
    bool isBool(const char* str);
    bool hasExpression(const char* str);
    int evaluateExpression(const char* str);
public:
    List();
    ~List();
    void append(const int value);
    void append(const float value);
    void append(const char* str);
    void append(const bool value);
    void appendAuto(const char* input);
    void set(int index, const int value);
    void set(int index, const float value);
    void set(int index, const char* str);
    void set(int index, const bool value);
    void print();
    int getSize();
    ElementWrapper operator[](int index) const;
};
#endif