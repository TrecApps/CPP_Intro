#include "Time.h"



Time::Time()
{
	hour = minute = 0; // No parameters? just assume it's midnight
	second = 0.0f;
}

Time::Time(BYTE h, BYTE m)
{
	minute = m % 60;
	hour = h % 24;
	second = 0.0f;
}


Time::~Time()
{
}

// Allow Time object to be added to one another
Time Time::operator+(Time & t)
{
	Time time;	// Declare a time object to return
	time.hour = this->hour;
	time.minute = this->minute;
	time.second = this->second;

	time.second += t.second;
	time.minute += time.second / 60.0f;
	time.second = static_cast<int>(time.second) % static_cast<int>(60.0f)
		+ (time.second - static_cast<int>(time.second));

	time.minute += t.minute;
	time.hour += time.minute / 60;
	time.minute %= 60;
	time.hour += t.hour;

	time.hour = time.hour % 24;

	return time;
}

// Allow an integer to be added to a time object
Time Time::operator+(int i)
{
	Time time;

	time.hour = this->hour;
	time.minute = this->minute;
	time.second = this->second;

	time.minute += i;
	time.hour = time.minute / 60;
	time.minute = time.minute % 60;

	time.hour %= 24;

	return time;
}

int Time::getHour()
{
	std::cout << "";
	return hour;
}

int Time::getMinute()
{
	return minute;
}

float Time::getSecond()
{
	return second;
}

timeMode Time::getTimeMode()
{
	return mode;
}

void Time::setTimeMode(timeMode tm)
{
	mode = tm;
}

void operator<<(std::ostream & o, Time &t)
{
	if (t.getTimeMode() == time_am_pm)
	{
		if (t.getHour() > 12)
		{
			o << t.getHour() - 12 << ":";
			if (t.getMinute() < 10)
				o << 0;
			o << t.getMinute() << ":";
			if (t.getSecond() < 10.0f)
				o << 0;
			o << t.getSecond() << " P.M.";
		}
		else
		{
			o << t.getHour() << ":";
			if (t.getMinute() < 10)
				o << 0;
			o << t.getMinute() << ":";
			if (t.getSecond() < 10.0f)
				o << 0;
			o << t.getSecond() << " A.M.";
		}
	}
	else
	{
		o << t.getHour() << ":";
		if (t.getMinute() < 10)
			o << 0;
		o << t.getMinute() << ":";
		if (t.getSecond() < 10.0f)
			o << 0;
		o<< t.getSecond();
	}
}
