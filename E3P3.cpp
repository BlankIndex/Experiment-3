#include<iostream>
#include<conio.h>



using namespace std;


int main() {

	int i, last, arrsize;
	char arr[1], temp;
	
	
	

	cout << "Welcome to the magic spinner" << endl;

	cout << "Please enter the magical slots(number of characters): ";
	cin >> arrsize;
	cout << "Please enter the string (be mindful of the magic slots you have selected) "<<endl;
	cout <<" "<< endl;;
	cout << "only those slots will be reversed; ^___^v";
	cout<<" " << endl;
	cout <<"now enter the characters to be stored"<<endl;

	for (i = 0; i < arrsize; i++)
	{
		cin >> arr[i];
	}

	//resersve code
	

	last = i - 1;
	i = 0;   
	
	while (i < last)
	{
		temp = arr[i];
		arr[i] = arr[last];
		arr[last] = temp;
		i++;
		last--;
	}
	
	cout << "bibidybobodybooo it is now turned to "<<endl;
	cout << endl;
	for (i = 0; i < arrsize; i++)
	{
		cout << arr[i];
	}
	


	_getch();
	return 0;

}
