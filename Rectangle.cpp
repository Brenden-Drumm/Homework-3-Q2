#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(){}

Rectangle::Rectangle(int newWidth, int newHeight){
    width = newWidth;
    height = newHeight;

}

int Rectangle::getArea(){return width*height;}

void Rectangle::draw(){
    for(int i = 0; i<height; i++){
        for(int j = 0; j<width; j++){
            std::cout<<"*";
        }
        std::cout<<""<<std::endl;
    }
}
