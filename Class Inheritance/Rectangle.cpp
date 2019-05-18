#include "Rectangle.h"
#include <iostream>


Rectangle::Rectangle()
{
    width = 20;     // Magic numbers
    height = 10;    // In advisable to use
}

Rectangle::Rectangle(int i)
{
    width = height = i;
}

Rectangle::Rectangle(int w, int h)
{
    width = w;
    height = h;
}

Rectangle::~Rectangle()
{

}

void Rectangle::printAttributes()
{
    std::cout << "This Rectangle has a height of " << height << " and a width of " << width << "\n";
}

void Rectangle::printType()
{
    std::cout << "Rectangle\n";
}

void Rectangle::printArea()
{
    std::cout << "Rectangle area: " << width*height << "\n";
}

void Rectangle::printParameter()
{
    std::cout << "Rectangle Parameter: " << width * 2 + height * 2 << "\n";
}

void Rectangle::setHeight(int h)
{
    height = h;
}

void Rectangle::setWidth(int w)
{
    width = w;
}

int Rectangle::getHeight()
{
    return height;
}

int Rectangle::getWidth()
{
    return width;
}

void pauseProgram()
{
    std::cin.get();
}