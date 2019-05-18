#pragma once
#include <iostream>

// Define BYTE as an unsigned char (which takes up one byte)
#define BYTE unsigned char

// Used to determine how the time formating will work
typedef enum timeMode {
	time_am_pm,
	time_military
}timeMode;

class Time
{
	friend class Time;	// Allow One Time object to access the private attributes of another
public:
	Time();
	Time(BYTE, BYTE); // Okay to use BYTE as 24 (hours) and 60 (minutes/seconds) fit within 1 byte
	~Time();

	Time operator+(Time&);
	Time operator+(int i);

	int getHour();
	int getMinute();
	float getSecond();

	timeMode getTimeMode();
	void setTimeMode(timeMode);

private:
	int hour, minute;
	float second;
	timeMode mode;
};

// Overload the << operator to handle this object
void operator<<(std::ostream&, Time&);