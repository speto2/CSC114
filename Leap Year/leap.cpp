//Tyler Ramey, CSC 114, Module 4: Leap Year
//ALl code is created originally by me 

#include <iostream> 
using namespace std; 

int main() {
	int year; 
	
	cout << "Enter Year:\n";
	cin >> year; 
	
	if(year % 100 == 0 && year % 400 == 0) {
		cout << year << " is a leap year\n"; 
		cout << "1";
	}else if(year % 4 == 0 && year % 100 != 0) {
		cout << year << " is a leap year\n"; 
		cout << "2"; 
	}else{ 
		cout << year << " is not a leap year\n"; 
	}
	
	return 0; 		
}
