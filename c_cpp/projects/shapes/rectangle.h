#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "geoshape.h"
class Rectangle : public geoshape {
    private:

    public:
        int calculateArea() override ;
        void setLength(int length);
        void setWidth(int width);
        int getLength();
        int getWidth();


};
#endif