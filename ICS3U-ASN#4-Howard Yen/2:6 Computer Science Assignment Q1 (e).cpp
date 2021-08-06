/* 2/6 Computer Science Assignment Q1 (e)
Howard Yen
Feb 6, 2018
Write a program that accepts a 4 digit number of the user and stores each digit into a variable and displays the individual digits.
*/

#include <iostream> //include header iostream
using namespace std; //using namespace std to avoid typing std::

int main () //beginning of the program
{
	int number; //declare variable for number entered
	int thousands; //declare variable for thousands place
	int hundreds; //declare variable for hundreds place
	int tens; //declare variable for tens place
	int ones; //declare variable for ones place

	do {
		cout << "Please enter a four-digit number: "; //ask for number
		cin >> number; //read in number
	} while (number<1000);

	thousands = number/1000; //calculate thousands place
	hundreds = (number%1000)/100; //calculate hundreds place
	tens = ((number%1000)%100)/10; //calculate tens place
	ones = ((number%1000)%100)%10; //calculate ones place

	cout << "The thousands value of your number is: " << thousands << "\n"; //display thousands value
	cout << "The hundreds value of your number is: " << hundreds << "\n"; //display hundreds value
	cout << "The tens value of your number is: " << tens << "\n"; //display tens value
	cout << "The ones value of your number is: " << ones << "\n"; //display ones play
	return(0); //end of the program
}
