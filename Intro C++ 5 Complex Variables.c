// Allow terminal input and Output, also the version used by C
#include <stdio.h>

// Enum - a way of setting human-readable values that actually represent a number
typedef enum typeFlag
{
    it_char = 1,
    it_int = 2
} typeFlag;

// Union - a collection of variables, only 1 of which is active at a time
typedef union unionExmp
{
    char c;
    int i;
} unionExmp;

// struct - a collection of variables, all of which are available
typedef struct structExmp
{
    char h;
    float n;
    typeFlag flag;
    unionExmp switcher;
} structExmp;

void printStruct(structExmp);

int main()
{
    structExmp se;
    se.h = 'h';             // Assign the character
    se.n = 19.41;           // assign the float
    se.switcher.c = 'c';    // assign the union. The union is now a character 
    se.flag = it_char;      // assign the enum flag according to what the union is

    printStruct(se);

    se.h = 'r';
    se.n = 10.28;
    se.switcher.i = 2016;   // union is no longer a character, but an integer
    se.flag = it_int;       // Set enum to it_int (2) to reflect union's new value

    printStruct(se);

    char input[5];
#ifdef _MSC_VER // If this is Visual Studio
    scanf_s(input, 5); // Halt the program before exiting
#else
    scanf("", input); // Yeah! I think Microsoft's way is better
#endif
}

void printStruct(structExmp se)
{
    printf("The structure's character is %c\n", se.h);
    printf("The structure's float is %f\n", se.n);
    if (se.flag == it_char)
    {
        printf("The structure's union is a character. It's value is %c\n\n", se.switcher.c);
    }
    else if(se.flag == it_int)
    {
        printf("The structure's union is an integer. It's value is %i\n\n", se.switcher.i);
    }
    else
    {
        printf("The sturcture's union is not known!\n\n");
    }
    
}
