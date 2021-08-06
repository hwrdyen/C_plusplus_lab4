/* 2/6 Computer Science Assignment Q1 (d)
Howard Yen
Feb 6, 2018
calculate the area of a circle by accepting values from a user
*/

#include <iostream> //include header iostream
#include <cmath> //include math library
using namespace std; //using namespace std to avoid typing std::

int main() //beginning of the program
{
	const double pi=3.141596; //declare what "pi" represent constantly
	double a;

	do{
		cout << "Please enter a number to represent the radius.\n"; //ask the user to enter a number to represent the radius
		cin >> a;
	} while (a<0);
	cout << "The answer of the area of a circle is " << pow(a,2)*pi << "\n"; //ask for the answer of the area of the circle
	return(0); //end of the program
}

//x^y ==> pow(x,y)
