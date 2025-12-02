#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "geoshape.h"
class Triangle : public geoshape {
    private:

    public:
        int calculateArea() override ;
        void setBase(int base);
        void setHeight(int height);
        int getBase();
        int getHeight();
};
#endif