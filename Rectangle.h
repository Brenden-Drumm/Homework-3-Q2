#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Polygon.h"


class Rectangle:public Polygon
{
    public:
        Rectangle();
        Rectangle(int newWidth, int newHeight);
        void setWidth(int newWidth);
        void setHeight(int newHeight);
        int getArea();
        void draw();

    protected:
        int width = 0;
        int height = 0;
};

#endif // RECTANGLE_H
