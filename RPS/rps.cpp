//Tyler Ramet, CSC 114, Module 5 Homework 1
//All code is orginially created by me

#include <iostream> 
#include <string> 
using namespace std; 

string enter;
bool run = true; 

int main() {
	while(run) {
		cout << "Enter your play:\n"; 
		cin >> enter;   
	
		if(enter == "rock" || enter == "Rock") {
			cout << "Computer plays paper\n"; 
			cout << "You Lose"; 
		}else if(enter == "paper" || enter == "Paper") {
			cout << "Computer plays scissors\n"; 
			cout << "You Lose";
		}else if(enter == "scissors" || enter == "Scissors") {
			cout << "Computer plays rock\n"; 
			cout << "You Lose";
		}else if(enter == "exit" || enter == "Exit") {
			cout << "Goodbye\n"; 
			run = false;
		}else{
			cout << "Invalid input";
		}
	}
	
	return 0; 
}
