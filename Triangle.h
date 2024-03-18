#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Polygon.h"


class Triangle:public Polygon
{
    public:
        Triangle();
        Triangle(int newWidth, int newHeight);
        void setWidth(int newWidth);
        void setHeight(int newHeight);
        int getArea();
        void draw();

    protected:
        int width = 0;
        int height = 0;
};

#endif // TRIANGLE_H
