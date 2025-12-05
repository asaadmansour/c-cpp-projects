#include "circle.h"

void Circle::setRadius(int radius) {
    this->dim1 = radius;
}

int Circle::getRadius() {
    return dim1;
}

int Circle::calculateArea() {
    return (314 * dim1 * dim1) / 100;  // Using integer approximation of PI
}
