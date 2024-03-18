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
    cout<<rect1.getArea()<<endl;
    cout<<tri1.getArea()<<endl;

    rect1.draw();
    tri1.draw();

    return 0;
}
