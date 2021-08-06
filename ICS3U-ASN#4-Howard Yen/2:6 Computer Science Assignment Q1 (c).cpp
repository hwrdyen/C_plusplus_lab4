/* 2/6 Computer Science Assignment Q1 (c)
Howard Yen
Feb 6, 2018
Write a program that allows the user to enter a time in seconds and then outputs how far an object would drop if it is in freefall for that length of time.
*/

#include <iostream> //include header iostream
#include <cmath> //include math library
using namespace std; //use namespace std to avoid typing std::

int main() //beginning of the program
{
	double a;
	do {
		cout << "Please enter a time in seconds.\n"; //ask the user to enter a time in seconds
		cin >> a;
	} while (a<0);
	cout << "The answer of how far the object would drop if it is in freefall is " << 9.8*pow(a,2)/2 << "\n"; //ask for how far the object would drop if it is in freefall
	return(0); //end of the program
}

//x^y ==> pow(x,y)
