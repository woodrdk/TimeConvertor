// Robert M Wood Jr.
// CPW 218
// 01/01/19
// Time Convertor

#include <cstdlib>
#include <iostream>
#include <string>


using namespace std;

int main() {

	const long SECONDS_PER_MINUTE = 60L;
	const long MINUTES_PER_HOUR = 60L;
	const long HOURS_PER_DAY = 24L;	double secondsInput = 0;
	
	int days = 0;
	int hours = 0;
	int minutes = 0;
	int seconds = 0;
	
	cout << "Enter a number of seconds:  ";
	cin >> secondsInput;
	
	days = secondsInput / SECONDS_PER_MINUTE / MINUTES_PER_HOUR / HOURS_PER_DAY;
	
	hours = secondsInput - (days * (SECONDS_PER_MINUTE * MINUTES_PER_HOUR * HOURS_PER_DAY));
	hours = hours / SECONDS_PER_MINUTE / MINUTES_PER_HOUR;
	
	minutes = secondsInput - (days * (SECONDS_PER_MINUTE * MINUTES_PER_HOUR * HOURS_PER_DAY)) - (hours * (SECONDS_PER_MINUTE * MINUTES_PER_HOUR));
	minutes = minutes / SECONDS_PER_MINUTE;

	seconds = secondsInput - (days * (SECONDS_PER_MINUTE * MINUTES_PER_HOUR * HOURS_PER_DAY)) - (hours * (SECONDS_PER_MINUTE * MINUTES_PER_HOUR)) - (minutes * SECONDS_PER_MINUTE);

	cout << secondsInput << " seconds is: " << endl
		<< days << " days, " 
		<< hours << " hours, "
		<< minutes << " minutes, "
		<< seconds << " seconds" << endl;
		   
	system("pause");
	return 0;
}