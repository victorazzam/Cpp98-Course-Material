#include <iostream>
using namespace std;

int main() {

	double value = (double) 7 / 2;
	cout << "(double) 7 / 2 = " << value << endl;

	int value2 = (int) 7.3; // Discards decimal without rounding
	cout << "(int) 7.3 = " << value2 << endl;

	//////////////////////////////////////////////////////////////

	int seconds = 14056;
	cout << endl << "Total numer of seconds: " << seconds << endl;

	int hours = seconds / 3600;
	cout << "Hours: " << hours << endl;

	seconds %= 3600;
	int minutes = seconds / 60;
	cout << "Minutes: " << minutes << endl;

	seconds %= 60;
	cout << "Seconds: " << seconds << endl;

	cout << "Hours + Minutes + Seconds = " << (hours * 3600) + (minutes * 60) + seconds << " seconds" << endl;

	return 0;
}
