// Gives us access to some library functionality, such as printing text to
// the terminal or accepting input from the keyboard
#include <iostream>

int x; // Declared Global variable, not yet assigned

// prototype for the print function
// In order to use the print function in main, we have to declare 
// that the function exists
void print();

int main() // Launch point of your program
{
    print();    // Calling function print
    x = 9;      // setting x to hold the value 9
    print();
    x = 4592;
    print();

    // This will ensure that the program will ask for us to press enter
    // With out it, the program will exit. If run from an IDE, program will flash
    // so fast you might no get to see what it does
    std::cin.get();
}

// Although we have established that the print function exists,
// we also need to "implement" it i.e. establish what it does. So we
// do so here
void print()
{
    // In a console/terminal app, this is C++'s way of printing text to the console/terminal
    std::cout << "x is " << x << "\n";

    // Note: '\n' stands for new line. '\' is a special character
}