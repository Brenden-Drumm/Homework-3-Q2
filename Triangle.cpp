#include "Triangle.h"
#include <iostream>

Triangle::Triangle(){}

Triangle::Triangle(int newWidth, int newHeight){
    width = newWidth;
    height = newHeight;

}

void Triangle::setWidth(int newWidth){
    width = newWidth;

}


void Triangle::setHeight(int newHeight){
    height = newHeight;

}

int Triangle::getArea(){return width*height/2;}

void Triangle::draw(){
    for(int i = 0; i<height; i++){
        for(int k = height-i; k>=0; k--){
            std::cout<<" ";
        }
        for(int j = 0; j<i*2+1; j++){
            std::cout<<"*";
        }
        std::cout<<""<<std::endl;
    }
}
