/* 2/6 Computer Science Assignment Q1 (b)
Howard Yen
Feb 6, 2018
Write a program that allows the user to enter a number of quarters, dimes, and nickels and then outputs the monetary value of the coins in cents.
*/

#include <iostream> //include header iostream
#include <cmath> //include math history
using namespace std; //using namespace std to avoid typing std::

int main() //beginning of the program
{
	int a;
	int b;
	int c;
	do {
		cout << "Enter a number of quarters.\n"; //ask the user to type in a number of quarters
		cin >> a;
		cout << "Enter a number of dimes.\n"; //ask the user to type in a number of dimes
		cin >> b;
		cout << "Enter a number of nickels.\n"; //ask the user to type in a number of nickels
		cin >> c;
	} while (a<0||b<0||c<0);
	cout << "The monetary value of the coins in cents is " << a*25+b*10+c*5 << "\n"; //ask for the monetary value of the coins in cents
	return(0); //end of the program
} 
