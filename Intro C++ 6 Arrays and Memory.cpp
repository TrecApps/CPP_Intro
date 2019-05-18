// Include Terminal input and output. Dropping C support
#include <iostream>

// Set up a structure for use
typedef struct floatMap
{
    float x;
    float y;
} floatMap;

int main()
{
    // Declare some integers on the .STACK
    int one = 1;
    int two = 2;
    int three = 3;
    int four = 4;

    // Declare an array of 5 int pointers
    // Note: the '*' specifies that we are dealing with pointers
    // The Square brackets '[]' indicate that we're dealling with an array
    // The '5' within the brackets indicate that there are five elements. (This cannot be changed)
    int* p_int[5];

    // Because this is an array of pointers, we use the '&' to get the address of the declared variables
    p_int[0] = &one;    // Note: in C++ and most other languages, arrays start at 0
    p_int[1] = &one;
    p_int[2] = &two;
    p_int[3] = &three;
    p_int[4] = &four;

    /* Print out the values of the array. Because the array is of pointers, the values are memory addresses*/
    std::cout << "one: " << p_int[0] << " two: " << p_int[1] << " three: "
        << p_int[2] << " four: " << p_int[3] << " five: " << p_int[4] << "\n";
    
    /* Using the '*' on a pointer to get the value stored at the memory address */
    std::cout << "one: " << *p_int[0] << " two: " << *p_int[1] << " three: "
        << *p_int[2] << " four: " << *p_int[3] << " five: " << *p_int[4] << "\n";
    
    // Changing the values of the original variables, to see the effect they have in the array
    one = 11;
    two = 22;
    three = 33;
    four = 44;

/* Print out the values of the array. Because the array is of pointers, the values are memory addresses*/
    std::cout << "one: " << p_int[0] << " two: " << p_int[1] << " three: "
        << p_int[2] << " four: " << p_int[3] << " five: " << p_int[4] << "\n";
    
    /* Using the '*' on a pointer to get the value stored at the memory address */
    std::cout << "one: " << *p_int[0] << " two: " << *p_int[1] << " three: "
        << *p_int[2] << " four: " << *p_int[3] << " five: " << *p_int[4] << "\n";
    
    // Declare a new 2-D array of pointers
    floatMap* float_map[4][4];

    // Two for loops for assigning each element in the new array we declared
    for(int c = 0; c < 4; c++)
    {
        for(int Rust = 0; Rust < 4; Rust++)
        {
            // Using new to find some memory in the HEAP for our new structure. The use of the "new"
            // Key word is why we're sticking with C++. If this were C, we would type:
            // float_map[c][Rust] = (floatMap*)malloc(sizeof(floatMap));
            float_map[c][Rust] = new floatMap;

            // Make sure it points to something other than NULL before doing anything with the pointer
            if (float_map[c][Rust])
            {
                // Notice, instead of using '.' for the struct's attributes, I use "->"
                // This is because I'm accessing a "pointer" to the structure, not the structure itself
                float_map[c][Rust]->x = (float)c + 0.01;
                float_map[c][Rust]->y = (float)Rust + 0.025;
            }
        }
    }

    // Now let's go through and print the values of our structure
    for(int c = 0; c < 4; c++)
    {
        for(int Rust = 0; Rust < 4; Rust++)
        {
            if(float_map[c][Rust])
            {
                std::cout << c << " + " << Rust << ": x = " << float_map[c][Rust]->x <<
                    " y = " << float_map[c][Rust]->y << "\n";
            }
        }
    }

    // We are done with our memory, so now we need to release it.
    for(int c = 0; c < 4; c++)
    {
        for(int Rust = 0; Rust < 4; Rust++)
        {
            if(float_map[c][Rust]) // Can't delete a NULL pointer
            {
                // In C++, any object we allocate with "new" must be released with "delete".
                // If we had used "malloc()", as in C, we would use "free()"
                delete float_map[c][Rust];
            }
            float_map[c][Rust] = NULL; // Good practice to set a deleted pointer to NULL
        }
    }

    // Pause the program to let user view the printed text
    std::cin.get();
}