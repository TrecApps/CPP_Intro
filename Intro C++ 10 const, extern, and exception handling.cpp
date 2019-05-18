#include <iostream>


// Function that is likely to throw an error
int error(int) throw (int,char); //throw char;

// Function that calls "error()" and catches it
void catcher(int);

// Main Function
int main()
{
	std::cout << "catching errors of up to value 4" << std::endl;
	for (int c = 0;c < 5;c++)
		catcher(c);
	std::cin.get();
}

// Function that will throw an int or a char
int error(int p) throw(int, char)
{
	if (p % 2)
		throw 2;	// Throw an integer
	else
		throw 'g';	// Throw a char

	return 0;		// Code that will not be reached
}

// Function to call the throwing function
void catcher(int p)
{
	// try block used when anticipating some sort of error or exception
	try
	{
		error(p); // Call the troublesome function
		std::cout << "Hey! No Error!\n";
	}
	catch (int x) // Catch any int thrown
	{
		std::cout << "ERROR: Exception int caught with value " << x << std::endl;
	}
	catch (char c) // Catch any char thrown
	{
		std::cout << "ERROR: Exception char caught with value " << c << std::endl;
	}
}
