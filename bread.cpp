#include <iostream>
using namespace std; 

//Tyler Ramey, CSC 114, Module 3 Vars and Data Types, 9/26/2024`
//All code is created by me 

int bread; 
int yeast;
int flour; 
int salt; 

int main() {
	cout << "Enter amount of yeast needed for one loaf of bread\n";
	cin >> yeast; 
	cout << "Enter amount of flour needed for one loaf of bread\n";
	cin >> flour; 
	cout << "Enter amount of salt needed for one loaf of bread\n";
	cin >> salt; 
	cout << "How many loaves of bread would you like to make\n"; 
	cin >> bread; 
	yeast = yeast * bread; 
	flour = flour * bread;
	salt = salt * bread; 
	cout << "you will need " << yeast << " parts yeast " << flour << " parts flour and " << salt << " parts salt to make " << bread << " loaves of bread\n";  
}
