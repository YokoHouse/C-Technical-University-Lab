#include <iostream>
#include <string>
using namespace std;

class Time {
private:
	int hour;
	int minute;
	int seconds;
	bool is24HourFormat;

public:
	Time(int h, int m, int s, bool format24h = true) : is24HourFormat(format24h){
		if (h >= 0 && h < 24) {
			hour = h;
		}
		else {
			cout << "Nevalidna stoinost za chas, obnovena stoinost 0!" << endl;
			hour = 0;
		}

		if (m >= 0 && m < 60) {
			minute = m;
		}
		else {
			cout << "Nevalidna stoinost za minuti, obnovena stoinost 0!" << endl;
			minute = 0;
		}

		if (s >= 0 && s < 60) {
			seconds = s;
		}
		else {
			cout << "Nevalidna stoinost za sekundi, obnovena stoinost 0!" << endl;
			seconds = 0;
		}
	}

	void printTime() const{
		if (is24HourFormat) {
			cout << " Chas: " << this->hour << " minuti: " << this->minute << " sekundi:" << this->seconds << endl;
		}
		else {
			int displayHours = (hour % 12 == 0) ? 12 : hour % 12;
			std::string period = (hour < 12) ? "AM" : "PM";
		std:cout << "Chas " << displayHours << ":" << minute << ":" << seconds << " " << period << " (12 chasov format) " << std::endl;
		}
	}

};


int main() {

	Time t2(23, 30, 50, true);
	t2.printTime();
	return 0;
}
