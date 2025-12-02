#include "circle.h"

void Circle::setRadius(int radius) {
    this->dim1 = radius;
}

int Circle::getRadius() {
    return dim1;
}

int Circle::calculateArea() {
    return 3.14 * dim1 * dim1;
}
