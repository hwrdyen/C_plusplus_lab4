/* 2/6 Computer Science Assignment Q2
Howard Yen
Feb 6, 2018
Write a program that accepts a value between 70 and 100 from the user.  If the value is less than 80 and even output "Hello", less than 80 and odd output "Hello friend".  If the number is greater than or equal to 80 output "Goodbye".  Use nested if statements.*/

#include <iostream> //include header iostream
#include <cmath> //include math library
using namespace std; //using namespace std to avoid typing std::

int main() //beginning of the program
{
	int a;
	do {
		cout << "Please enter a number between 70 and 100.\n"; //ask the user to type in a number between 70 and 100
		cin >> a;
	} while (a<70||a>100); //error checks
	if ( a < 80 ){ 
		if (a%2==0) { 
			cout << "Hello.\n"; //if a<80 and a is even then the output will be Hello
		}
		else {
			cout << "Hello Friend.\n"; //if a<80 and a is odd thent he out put will be Hello Friend
		}
	}
	else {
		cout << "Goodbye.\n"; //if a>=80 then the output will bw Giidbye
	}
	return(0); //end of the program
}
