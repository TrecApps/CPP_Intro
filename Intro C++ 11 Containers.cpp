#include <iostream>  // console functionality
#include <vector>    // std::vector<> the flexible array
#include <map>       // std::map<>

int main()
{
	// Declare a vector
	std::vector<float> floaty;

	// Add some values to the vector
	floaty.push_back(452.5);
	floaty.push_back(82936.823756);
	floaty.push_back(4875.2374);
	floaty.push_back(282.4);
	floaty.push_back(3294.098);
	floaty.push_back(62);        // looks like an int, but becomes a float

	for (int c = 0; c < floaty.size();c++)
	{
		std::cout << "Float at location " << c << " is " << floaty.at(c) << "!\n";
	}

	// Declare a standard map, using an int as the key and a C-String as the value
	std::map<int, char*> starWarsMovies;

	// Add some values to the map
	starWarsMovies.insert(std::pair<int, char*>(1, "The Phantom Menace"));
	starWarsMovies.insert(std::pair<int, char*>(2, "Attack of the Clones"));
	starWarsMovies.insert(std::pair<int, char*>(3, "Revenge of the Sith"));
	starWarsMovies.insert(std::pair<int, char*>(4, "A New Hope"));
	starWarsMovies.insert(std::pair<int, char*>(5, "The Empire Strikes Back"));
	starWarsMovies.insert(std::pair<int, char*>(6, "Return of the Jedi"));
	starWarsMovies.insert(std::pair<int, char*>(7, "The Force Awakens"));
	starWarsMovies.insert(std::pair<int, char*>(9, "The Ultimate Prophesy"));

	// Many containers use a special iteration object to 
	for (std::map<int, char*>::iterator it = starWarsMovies.begin(); it != starWarsMovies.end();it++)
	{
		std::cout << "Star Wars Episode " << it->first << " is called '" << it->second << "'!\n";
	}

	// Attempt to access an entry that has not been entered
	try
	{
		starWarsMovies.at(8); // We did not store 8
	}
	catch (std::out_of_range out) // This type is what would be thrown
	{
		std::cout << "Exception caught! " << out.what() << std::endl; // another C++ term for new line
		std::cout << "Turns out there is no Episode 8 stored! OOPS";
	}

	std::cin.get();
}