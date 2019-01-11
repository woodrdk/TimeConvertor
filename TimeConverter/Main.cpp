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
	const long HOURS_PER_DAY = 24L;
	long secondsInput = 0;
	
	int days = 0;
	int hours = 0;
	int minutes = 0;
	int seconds = 0;
	
	cout << "Enter a number of seconds:  ";
	cin >> secondsInput;
	
	days = secondsInput / SECONDS_PER_MINUTE / MINUTES_PER_HOUR / HOURS_PER_DAY; // figures out days from the seconds inputted
	double dayMath = (days * (SECONDS_PER_MINUTE * MINUTES_PER_HOUR * HOURS_PER_DAY));

	hours = secondsInput - dayMath; // (days * (SECONDS_PER_MINUTE * MINUTES_PER_HOUR * HOURS_PER_DAY));
	hours = hours / SECONDS_PER_MINUTE / MINUTES_PER_HOUR; // figures out hours after days removed

	double hoursMath = (hours * (SECONDS_PER_MINUTE * MINUTES_PER_HOUR));

	minutes = secondsInput - dayMath - hoursMath;
	minutes = minutes / SECONDS_PER_MINUTE; // figures out minutes after days and hours removed

	seconds = secondsInput - dayMath - hoursMath - (minutes * SECONDS_PER_MINUTE); // figure out seconds left after days hours mins

	cout << secondsInput << " seconds is: " << endl	// print out results
		<< days << " days, " 
		<< hours << " hours, "
		<< minutes << " minutes, "
		<< seconds << " seconds" << endl;
		   
	system("pause");	// press key to continue
	return 0;
}