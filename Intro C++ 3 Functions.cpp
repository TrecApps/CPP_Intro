// Include input and output code
#include <stdio.h> // Maintain backwards compatibility with C

// Declare function prototypes
// You can have multiple functions of the same name, provided thay have a different parameter list
// in Prototypes, you can also decline to name the parameters.
int add(int, int);

// Since we are estabilishing floats here, this function can have the same name as the previous one
// This is called function overloading
// Also, the second parameter is being given a default value of "5.5". This means that we can pass two floats
// And the value of the second float will be used. However, if we pass in only one float, "5.5" will be the value of the second float
float add(float, float y = 5.5);

// Start Point
int main()
{
    printf("integers 6 and 7 added are %i\n", add(6,7)); // We're passing in 2 int's to add
    printf("floats 6.6 and 7.9 added are %f\n", add((float)6.6, (float) 7.9)); // Compiler assumes it's double s we need to cast to float
    printf("floats 6.6 and the default 5.5 added are %f\n", add((float)6.6));

    // Pause program for user input
    char scany[5];
    scanf_s(scany, 5);
}

// Now we need to define the add functions

// Here, we DO need to name the parameters in order to use them in the function
int add(int x, int y)
{
    int z;
    z = x + y;
    return z;
}

float add(float x, float y)
{
    return x + y;
}