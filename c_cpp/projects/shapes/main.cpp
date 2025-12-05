#include "triangle.h"
#include "circle.h"
#include "square.h"
#include "rectangle.h" 

#include <iostream>
using namespace std;

int main() {
    Triangle t1;
    t1.setBase(10);
    t1.setHeight(10);
    cout << t1.calculateArea() << endl;;
    Circle c1;
    c1.setRadius(15);
    cout <<c1.calculateArea()<<endl;
    Rectangle r1;
    r1.setLength(15);
    r1.setWidth(10);
    r1.calculateArea();
     cout <<r1.calculateArea()<<endl;
    Square s1;
    s1.setSide(15);
    cout <<s1.calculateArea()<<endl;
    return 0;
}