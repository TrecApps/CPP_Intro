#include "Square.h"
#include <iostream>

Square::Square() : Rectangle(15)
{

}

Square::Square(int i) : Rectangle(i)
{
    
}

Square::~Square()
{
    
}

void Square::printAttributes()
{
    std::cout << "This Square has a side-length of " << width << "\n";
}

void Square::printType()
{
    std::cout << "Square, which is also a ";
    Rectangle::printType(); // How we call the base implementation of this method
}

void Square::printArea()
{
    std::cout << "Square area: " << width * width << "\n";
}

void Square::printParameter()
{
    std::cout << "Square Parameter: " << width * 4 << "\n";
}

void Square::setHeight(int h)
{
    height = width = h;
}

void Square::setWidth(int w)
{
    width = height = w;
}


int Square::getArea()
{
    return width * width;
}

int Square::getParameter()
{
    return width * 4;
}