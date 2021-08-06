/* 2/6 Computer Science Assignment Q1 (a)
Howard Yen
Feb 6, 2018
Write a program that converts Jovian years to Earth years.
*/

#include <iostream> //include header iostream
#include <cmath> //include math library
using namespace std; //use namespace std to avoid typing std::

int main() //beginning of the program
{
	double a;
	do {
		cout << "Enter a number of Jovian years.\n"; //ask the user ot type in a number of Jovian years
		cin >> a;
	} while (a<0);
	cout << "The Earth years that equals to this Jovian years is " << a*12 <<"\n"; //ask for the answer of the Earth years
	return(0); //end of the program
}
