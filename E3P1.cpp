#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main() {

	int list[10];
	int maxlist, leastlist, smallest, largest;
	int sumlist;
	double average;

	int i;

	for (i = 1; i < 11; i++) {
		cout << "please input the "<< i << " integer" << endl;
		cin >> list[i];
	}

	maxlist = 1;
	for (i = 1; i < 10;i++) {

		if (list[maxlist] < list[i]) {

			maxlist = i;
		}
		largest = list[maxlist];
		
	}
	
	leastlist = 1;

	for (i = 1; i < 11;i++) {

		if (list[leastlist] > list[i]) {

			leastlist = i;
		}	
		smallest = list[leastlist];
	}

	sumlist = 0;
	for (i = 1; i < 11;i++) {

		sumlist = sumlist + list[i];

		}

		average = sumlist/10;




	cout << "the largest number in the input is " << largest<<endl;
	cout << "the smallest numberin the input is " << smallest << endl;
	cout << "the average of  the input is " << average << endl;



	_getch();
	return 0;
}
