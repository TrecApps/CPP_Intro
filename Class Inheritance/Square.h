#pragma once
#include "Rectangle.h"

// Decare our sub-class. 
class Square : public Rectangle
{
public:
    Square();
    Square(int);
    ~Square();

    // Override the methids from the Rectangle Parent class
    void printAttributes();
    void printType();
    void printArea();
    void printParameter();
    void setHeight(int h);
    void setWidth(int w);

    int getArea();
    int getParameter();
};