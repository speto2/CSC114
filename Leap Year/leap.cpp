#include <iostream> 
using namespace std; 

int main() {
	int year; 
	int check = 0; 
	
	cout << "Enter Year:\n";
	cin >> year; 
	
	if(year % 100 == 0 && year % 400 == 0) {
		cout << year << " is a leap year\n"; 
		cout << "1"; 
		check = 1; 
	}else if(year % 4 == 0 && year % 100 != 0) {
		cout << year << " is a leap year\n"; 
		cout << "2"; 
	}else{ 
		cout << year << " is not a leap year\n"; 
	}
	
	return 0; 		
}
