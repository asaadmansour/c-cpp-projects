#include "triangle.h"
void Triangle::setBase(int base){
    this->dim1 = base;
};
void Triangle::setHeight(int height){
    this->dim2 = height;
};
int Triangle::getBase(){
    return dim1;
};
int Triangle::getHeight(){
    return dim2;
};
int Triangle::calculateArea() {
    return (dim1 * dim2) / 2;
}