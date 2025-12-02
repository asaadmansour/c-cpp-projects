#include "rectangle.h"
int Rectangle::calculateArea(){
    return dim1 * dim2;
};
void Rectangle::setLength(int length){
    this->dim1 = length;
};
void Rectangle::setWidth(int width){
    this->dim2 = width;
};
int Rectangle::getLength(){
    return dim1;
};
int Rectangle::getWidth(){
    return dim2;
};