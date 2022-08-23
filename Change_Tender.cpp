
/*
program that computes how to dispense change after a purchase.
The program prompt the user for the amount of purchase, the amount of cash tendered, 
and then output the change by the number of coins or bills to dispense. In order to keep the 
program strictly sequential, print out denominations even when they are zero
*/

// Move to main progrmme and start there


#include <iostream>
using namespace std;

 int change( int purchased, int cash){										
	int notes,change,remainder;																// Calculate the change and stored in a variable
	change = (purchased - cash);															// calculate the remainder using the modulo operator
	cout << "Your change is : " << change << endl;                                    
	
	notes = change/5000;
	cout << "Number of 5000 Notes are 			= "<< notes<< endl;
	remainder = change%5000;
//	cout << " Your remaing val :"<< temp << endl;

	notes = remainder/2000;
	cout << "Number of 2000 Notes are 			= "<< notes<< endl;
	remainder = remainder%2000;

	notes = remainder/1000;
	cout << "Number of 1000 Notes are 			= "<< notes<< endl;
	remainder = remainder%1000;
	
	notes = remainder/500;
	cout << "Number of 500 Notes are 			= "<< notes<< endl;
	remainder = remainder%500;
	
	notes = remainder/100;
	cout << "Number of 100 Notes are 			= "<< notes<< endl;
	remainder = remainder%100;
	
	notes = remainder/50;
	cout << "Number of 50  Notes are 			= "<< notes<< endl;
	remainder = remainder%1000;
	
	notes = remainder/20;
	cout << "Number of 20 Notes/Coins are 	  		= "<< notes<< endl;
	remainder = remainder%20;	

	notes = remainder/10;
	cout << "Number of 10 Notes/coins are 	  		= "<< notes<< endl;
	remainder = remainder%10;
	
	notes = remainder/5;
	cout << "Number of 5 coins are 				= "<< notes<< endl;
	remainder = remainder%5;
	
	notes = remainder/2;
	cout << "Number of 2 coins are 				= "<< notes<< endl;
	remainder = remainder%2;	
	
	notes = remainder/1;
	cout << "Number of 1 coins are 				= "<< notes<< endl;
	remainder = remainder%1;
	
	return 0;
}

int main(){
	int purchased, cash;										
	cout << " Enter your amount purchased" << endl;									//getting users amount they puchased.
	cin >> purchased;																
	cout << "Enter your cash valuve" << endl;										//getting the money they tender as cash
	cin >> cash;
	change(purchased, cash);
	return 0;
}