#ifndef GEOSHAPE_H
#define GEOSHAPE_H
class geoshape {
    protected:
        int dim1;
        int dim2;
    public:
        virtual ~geoshape() = default;
        virtual int calculateArea() = 0;
};
#endif