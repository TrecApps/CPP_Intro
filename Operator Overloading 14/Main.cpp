#include "Time.h"



int main()
{
	// Declare Time objects
	Time time1, time2;

	std::cout << "Starting out, time1 is ";
	std::cout << time1;
	std::cout << " and time 2 is ";
	std::cout << time2;
	std::cout << "\n\n";



	// Testing out the overloaded operators
	time1 = time1 + 150;
	time2 = time2 + 445;

	// Print out times current values
	std::cout << "After adding 150 and 445 respectively, time1 is ";
	std::cout << time1;
	std::cout << " and time 2 is ";
	std::cout << time2;
	std::cout << "\n\n";

	// add the times together
	Time timeTotal = time1 + time2;

	std::cout << "The two times added together are ";
	std::cout << timeTotal;
	std::cout << "\n\n";

	timeTotal = timeTotal + Time(4, 10);

	std::cout << "The total time + 4:10 is ";
	std::cout << timeTotal;
	std::cout << "\n\n";

	timeTotal.setTimeMode(time_am_pm);

	std::cout << "That same time in AM and PM form is ";
	std::cout << timeTotal;
	std::cout << "\n\n";

	std::cin.get();
}