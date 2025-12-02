#ifndef SQUARE_H
#define SQUARE_H
#include "rectangle.h"
class Square : private Rectangle {
    private:
    public:
        int getSide();
        void setSide(int side);
        int calculateArea() override;
};
#endif