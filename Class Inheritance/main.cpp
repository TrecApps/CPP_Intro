#include "Square.h"

int main()
{
    Rectangle* r = new Rectangle();

    // Do the NULL check once and for all
    if(!r)
        return 1;
    
    Square s(60); // How we declare an object with parameters

    r->printType();
    r->printAttributes();
    r->printParameter();
    r->printArea();

    s.printType();
    s.printAttributes();
    s.printParameter();
    s.printArea();

    pauseProgram();

    delete r;

    return 0;
}