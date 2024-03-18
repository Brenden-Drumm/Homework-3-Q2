/*************************************************************************
** Author : Brenden Drumm
** Program : hw3, q2
** Date Created : March 17, 2024
** Date Last Modified : March 17, 2024
**
** Problem:
Create Rectangle and Triangle children of a given Polygon class.
- Define the children with width and height.
- Overwrite the Polygon class' instance of a draw and get area class for each child.
- Area returns width*height for Rectangle, and width*height/2 for Triangle.
- Draw makes a representation of the shape with asterisks.
*************************************************************************/
#include <iostream>
#include "Polygon.h"
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Rectangle rect1(2,8);
    Triangle tri1(2,8);
    //Polygon poly1(2,2);
    //Q1: I did not get an error, it ran fine creating a polygon.
    //Q2: I got an undefined reference error.

    rect1.draw();
    tri1.draw();

    rect1.setWidth(10);
    rect1.setHeight(10);

    tri1.setWidth(10);
    tri1.setHeight(10);

    cout<<rect1.getArea()<<endl;
    cout<<tri1.getArea()<<endl;

    return 0;
}
