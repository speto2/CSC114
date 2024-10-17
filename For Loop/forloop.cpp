//Tyler Ramey, CSC 114, Module 5, Homework 2
//All code is created originally by me

#include <iostream> 
using namespace std; 

int total = 0; 

int main() {
	for(int i = 1; i < 11; i++) {
		cout << total << " + " << i << endl;
		total += i;    
	}
	
	cout << "Total is:" << total << endl; 
	
	return 0; 
}
