#pragma once

// Structure to be held by our object
typedef struct demoStruct
{
    int i;
    char c;
} demoStruct;

// Time to declare a class
class demoClass
{
public:         // Members declared here are accessible from anywhere in your program
    demoClass(); // Constructor
    ~demoClass(); // Destructor

    // Functions that apply to objects are known as "Methods"
    void setInt(int);
    void setChar(char);
    void printInt();
    void printChar();
private:        // Members declared here can only be accessible from other members of the object
    demoStruct* ds;
};

// Declare a function to pause the program
void pauseProgram();