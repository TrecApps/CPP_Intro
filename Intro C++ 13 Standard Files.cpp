#include <iostream>
#include <fstream>
#include <string>

// Writes three sentences by line witht the ofstream class and
// then reads those sentences with the ifstream class
int main()
{
	// Prepare the output file
	std::ofstream output;
	output.open("someFile.txt", std::ios::out);

	if (!output.is_open())
	{
		std::cerr << "Error! Output file failed to open!";
		return 1;
	}


	std::cout << "Type three sentences:\n";
	std::string sentence;

	for (int c = 0; c < 3;c++)
	{
		std::getline(std::cin,sentence);
		output.write(sentence.c_str(),sentence.length());
		output.put('\n');
	}

	output.close();  // Close the file

	std::ifstream input;
	input.open("someFile.txt",std::ifstream::in);

	if (!input.is_open())
	{
		std::cerr << "Error! Input file failed to open!";
		return 2;
	}

	std::cout << "Preparing to Read from 'someFile.txt'\n\n";

	while (!input.eof())
	{
		std::getline(input, sentence);
		std::cout << sentence << std::endl;
	}

	std::cout << std::endl << "That was the file!";
	std::cin.ignore(1);

	std::cin.get();
}