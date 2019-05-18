#include <string.h>		// Functions to manipulate C-Style Strings
#include <string>		// C++'s string class
#include <iostream>		// Console input and output

int pd_strlen(const char*);

int main()
{
	// Declare starting strings
	char* c_string = "Hello C-String!";           // C-String
	std::string cpp_string = "Hello CPP-String!"; // C++'s std::string, wrapper for C-String

	// Print out basics about c-string
	std::cout << "c_string = '" << c_string << "' with a length of \n\t" << strlen(c_string)
		<< "\t(C Library)\n\t" << pd_strlen(c_string) << "\t(own function)\n\n";

	// Print out basics about std::string from c++
	std::cout << "cpp_string = '" << cpp_string << "' with a length of \n\t" << strlen(cpp_string.c_str())
		<< "\t(C Library)\n\t" << pd_strlen(cpp_string.c_str()) << "\t(own function)\n\t" << cpp_string.size()
		<< "\t(C++ string method)\n\n";

	// Demonstrate copying a c_string into std::string
	std::string cppFromCString = c_string;
	std::cout << "cppFromCString = '" << cppFromCString << "' with a length of \n\t" << strlen(cppFromCString.c_str())
		<< "\t(C Library)\n\t" << pd_strlen(cppFromCString.c_str()) << "\t(own function)\n\t" << cppFromCString.size()
		<< "\t(C++ string method)\n\n";

	// Demonstrate copying a c_string into another c-String
	char* destination = new char[strlen(c_string) + 2];
	destination[strlen(c_string) + 1] = '\0'; // make sure destination has an end

	strcpy_s(destination, strlen(destination),c_string);
	std::cout << "destination = '" << destination << "' with a length of \n\t" << strlen(destination)
		<< "\t(C Library)\n\t" << pd_strlen(destination) << "\t(own function)\n\n";

	// Deomonstrate basic concatination with c++ strings
	cpp_string = "Substring 1\n" + std::string("substring2\n") +"substring3, but all concatinated via '+' operator!";

	std::cout << "cpp_string = '" << cpp_string << "' with a length of \n\t" << strlen(cpp_string.c_str())
		<< "\t(C Library)\n\t" << pd_strlen(cpp_string.c_str()) << "\t(own function)\n\t" << cpp_string.size()
		<< "\t(C++ string method)\n\n";

	std::cout << "The cpp_string was regenerated using (char*) + (std::string) + (char*)\n";
	std::cout << "(std::string) + (std::string) is also legal, but (char*) + (char*) is NOT!\n";

	std::cout << "Also, you might have trouble compiling on g++ for linux if (std::string) is being constructed\n";
	std::cout << "on the spot. You might have to declare another std::string variable with the string you want,\n";
	std::cout << "and use the variable in any function call or concatination!\n\n";

	std::cout << "For instance, ~~foo(std::string(\"someString\"));~~ works in Visual C++!\n";
	std::cout << "However, in g++, you'd have to do something like this:\n";
	std::cout << "~~std::string strVar = \"someString\";~~\n~~foo(strVar);~~\n\n";

	// For appending to a C++ string
	std::string appString = "Base String";
	std::cout << "appString first equals '" << appString << "'\n";
	appString += " with appended text!";
	std::cout << "after appending, it now equals '" << appString << "'\n";

	appString.erase(11); // second parameter indicates number of characters to erase,
						// Erasing all characters of none are provided
	std::cout << "After erasing at position 11, appString = '" << appString << "'\n\n";

	char* str1 = "compString", *str2 = "compString";

	std::cout << "'str1' = '" << str1 << "' and 'str2' = '" << str2 << "' with a compare value of " << strcmp(str1,str2) << std::endl;
	str1 = "String1";
	str2 = "String2";
	std::cout << "'str1' = '" << str1 << "' and 'str2' = '" << str2 << "' with a compare value of " << strcmp(str1, str2) << std::endl;

	// Demonstrate Tokens
	char numbers[] = "1,2,3,4,5,6,7,8,9,10";

	char* context = NULL;
	char comma[] = ",";

	char* number = strtok_s(numbers, comma, &context);
	while (number)
	{
		std::cout << "Printing " << number << std::endl;
		number = strtok_s(NULL, comma, &context);
	}


	delete[] destination; // since we actually used 'new'
	destination = nullptr; // Good pracitce to nullify deleted values
	std::cin.get();
}




int pd_strlen(const char * start)
{
	if(!start || *start == '\0')
		return 0;
	int returnable = 0;
	while (*start != '\0')
	{
		start++;
		returnable++;
	}
	return returnable;
}
