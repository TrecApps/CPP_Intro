// Include External functions and variables we could use.

// This is a C version of "iostream", which will give us the printf function.
// Although this file is C++, it is written in such a way that you can change the file extension
// from 'cpp' to 'c' and it will still work. 
#include <stdio.h>

// This is a library that will give us access to various math functions, such as pow().
// In C++, we could also include "<cmath>" instead. However, to make it backwards compatible
// with C, we're using "math.h"
#include <math.h>

// Declare some global variables
int gx, gy;     // Whole numbers
float gz, gf;   // Floating point (i.e. decimal numbers)

// Start our program
int main()
{
    gx = 4;     // int
    gy = 6;     // int
    gz = 4.5;   // float
    gf = 6.7;   // float

    // Use C's way of printing to the termianl/console
    printf("gx = %i\ngy = %i\ngz = %f\ngf = %f\n", gx, gy, gz, gf);

    // Here, we are declaring a scoped variable. it is not availabe above this line
    // and will end once the scope (in this case, the "main" function) ends
    int mi = gx + gy;   // Demo addition
    printf("gx + gy = %i\n", mi);

    // Demo of subtraction
    int mi = gx - gy;   
    printf("gx - gy = %i\n", mi);

    // Demo of subtraction
    int mi = gx - gy;   
    printf("gx - gy = %i\n", mi);

    // Demo of multiplication
    int mi = gx * gy;   
    printf("gx * gy = %i\n", mi);

    // Demo of division
    int mi = gx / gy;   
    printf("gx / gy = %i\n", mi);

    // Demo of mod-division (returns the remainder)
    int mi = gx % gy;   
    printf("gx % gy = %i\n", mi);

    // Demo of addition with floating point values
    float mf = gz + gf;
    printf("gz + gf = %f\n", mf);

    // Demo of subtraction with floating point values
    mf = gz - gf;
    printf("gz - gf = %f\n", mf);

    // Demo of multiplication with floating point values
    mf = gz * gf;
    printf("gz * gf = %f\n", mf);

    // Demo of division with floating point values
    mf = gz / gf;
    printf("gz / gf = %f\n", mf);

    // Demo of casting
    printf("Casting each float as int before adding gets %i\n", ((int)gz + (int)gf));
    printf("Casting the float that results from addition gets %i\n", (int)(gz+gf));

    // Now to demo a couple math functions (from "math.h")
    double base = 2;
    double exp = 4;
    printf("The power of %f to the number %f is %f\n", base, exp, pow(base, exp));

    // Demo of Order of Operations
    int firstOrder = (4 + 5) * 4 / 3 + (25 - 11);
    printf("The answer to (4 + 5) * 4 / 3 + (25 - 11) is %i\n", firstOrder);

    // Not in the original YouTube video, but included here
    firstOrder = 4 + 5 * 4 / 3 + (25 - 11);
    printf("The answer to 4 + 5 * 4 / 3 + (25 - 11) is %i\n", firstOrder);

    // Used in place of C++'s std::cin.get()
    char scan[5];
    scanf_s(scan, 5); // Halt the program before exiting
}