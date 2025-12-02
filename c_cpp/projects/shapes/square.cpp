#include "square.h"

int Square::getSide() {
    return getLength();
}

void Square::setSide(int side) {
    setLength(side);
    setWidth(side); 
}

int Square::calculateArea() {
    return Rectangle::calculateArea();
}