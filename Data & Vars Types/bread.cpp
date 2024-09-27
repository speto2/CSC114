//Tyler Ramey, CSC 114, 9/27/2024, Module 3: Vars and Data Types

#include <iostream> 
using namespace std; 

float flour;
float salt;
float yeast;
float water;
int bread;  

int main() {
	cout << "Enter number of grams of flour needed for one load of bread\n"; 
	cin >> flour; 
	cout << "Enter number of grams of salt needed for one load of bread\n";
	cin >> salt; 
	cout << "Enter number of grams of yeast needed for one load of bread\n";
	cin >> yeast; 
	cout << "Enter number of grams of water needed for one load of bread\n";
	cin >> water; 
	cout << "How many loaves of bread would you like to make?\n"; 
	
	cin >> bread; 
	flour = flour * bread;
	salt = salt * bread;
	yeast = yeast * bread;
	water = water * bread; 
	
	cout << "To make " << bread << " loaves of bread you will need " << flour << " grams of flour, " << salt << " grams of salt, " << yeast << " grams of yeast and " << water << " grams of water."; 

}
