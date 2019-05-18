// Since we are including one of our own files, and it's in the same directory as this file, use quotations instead of <>
#include "demoClass.h"

// Because iostream is a library file, use <> instead of quotation marks
#include <iostream>

// Implement the constructor for our demo class.
// We want to assign it's private struct with an actual memory location in the HEAP
demoClass::demoClass()
{
    ds = new demoStruct;
}

// Implement the destructor. Because we have allocated memory in the constructor,
// we need to delete it in the destructor
demoClass::~demoClass()
{
    if(ds)
        delete ds;
        ds = NULL;
}

void demoClass::setInt(int in)
{
    if(ds)
        ds->i = in;
}

void demoClass::setChar(char ch)
{
    if(ds)
        ds->i = ch;
}

void demoClass::printInt()
{
    if(ds)
        std::cout << "Struct's int is " << ds->i << "\n";
    else
    {
        std::cout << "ERROR! Structure is NULL!!\n";
    }
    
}

void demoClass::printChar()
{
    if(ds)
        std::cout << "Struct's char is " << ds->c << "\n";
    else
    {
        std::cout << "ERROR! Structure is NULL!!\n";
    }
    
}

void pauseProgram()
{
    std::cin.get();
}