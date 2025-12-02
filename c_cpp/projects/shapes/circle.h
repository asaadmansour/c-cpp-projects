#ifndef CIRCLE_H
#define CIRCLE_H
#include "geoshape.h"
class Circle : public geoshape {
    private:

    public:
        int calculateArea() override ;
        void setRadius(int radius);
        int getRadius();
};
#endif