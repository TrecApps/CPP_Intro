#pragma once

// Declare the base class
class Rectangle
{
public:
    Rectangle();
    Rectangle(int);
    Rectangle(int, int);
    ~Rectangle();

    // Declare some virtual methods
    // Virtual methods, meaning they can be overriden by subclasses
    void virtual printAttributes();
    void virtual printType();
    void virtual printArea();
    void virtual printParameter();
    void virtual setHeight(int h);
    void virtual setWidth(int w);

    // No need to make these virtual
    int getHeight();
    int getWidth();

// We use Protected instead of private as private will restrict access to this class
// Protected will allow subclasses to access these attributes
protected:
    int width, height;
};

void pauseProgram();
