#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>

using namespace std;

int main() {

	int i;
	double A[8], B[8], C[8];
	string day;

	for (i = 1; i < 8; i++) {

		
		if (i == 1) {
			day == "Sunday";
		}
		if (i == 2) {
			day == "Monday";
		}
		if (i == 3) {
			day == "Tuesday";
		}
		if (i == 4) {
			day == "Wednesday";
		}
		 if (i == 5) {
			day == "Thursday";
		}
		 if (i == 6) {
			day == "Friday";
		}
		 if (i == 7) {
			day == "Saturday";
		}


	
	cout << "please enter the temprature in province A for day " << i << day << endl;
	cin >> A[i];

	cout << "please enter the temprature in province B for day " << i << day << endl;
	cin >> B[i];

	cout << "please enter the temprature in province C for day " << i << day << endl;
	cin >> C[i];

	
	};


	cout << "Tempratures:" << endl;

	for (i = 1; i < 8; i++) {

		cout << "Province A: " << i << A[i] <<endl;
	};

	for (i = 1; i < 8; i++) {

	cout << "Province B: " << i << B[i] << endl;

	};

	for (i = 1; i < 8; i++) {

	cout << "Province C: " << i << C[i] << endl;

	};
	_getch();
	return 0;
}