// Include header file for our class
// We don't need to include iostream (or stdio.h) here as we don't print anything directly
// in this file.
// Any printing or keyboard input is handled by our class or by the function we're including
#include "demoClass.h"

int main()
{
    // Even though this is an object we're declaring, the object has a default constructor (no parameters)
    // Therefore, this default constructor will run automatically. 
    // If no default constructor existed but one with parameters did, we would need to provide those parameters
    demoClass ds;

    ds.setChar('a');
    ds.setInt(10);

    ds.printChar();
    ds.printInt();

    ds.setChar('G');
    ds.setInt(1993);

    ds.printChar();
    ds.printInt();

    pauseProgram();
}// At this point, ds's destructor will run