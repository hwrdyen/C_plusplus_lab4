/* 2/8 Computer Science Assignment Q3
Howard Yen
Feb 8, 2018
Write a program that accepts 5 numbers from the user and displays the largest and the smallest number.  Hint: use 2 variables to store the max and min value */

#include <iostream> //include header iostream
using namespace std; //using namespace std to avoid typing std::

int main() //beginning of the program
{
	double number;
	double max;
	double min;

	cout << "Please enter the first number.\n"; //ask the user to typs in the first number
	cin >> number;
	max = number, min = number; //the max is the first number and the min is also the first number
	
	cout << "Please enter the second number.\n"; //ask the user tot ype in the second number
	cin >> number;
	if (number > max){
		max = number; //if the second number is bigger than the max than the max number is the second number
	}
	else if (number < min){
		min = number; //if the second number is smaller than the min number than the min number is the second number
	}

	cout << "Please enter the third number.\n"; //ask the user to type in the third number
	cin >> number;
	if (number > max){
		max = number; //if the third number is bigger than the max number than the max number is the third number
	}
	else if (number < min){
		min = number; //if the third number is smaller than the min number than the min number is the third number
	}

	cout << "Please enter the fourth number.\n"; //ask the user to type in the fourth number
	cin >> number;
	if (number > max){
		max = number; //if the fourth number is bigger than the max number then the max number is the fourth number
	}
	else if (number < min){
		min = number; //if the fourth number is smaller than the min number than the min number is the fourth number
	}

	cout << "Please enter the fifth number.\n"; //ask the user to type in the fifth number
	cin >> number;
	if (number > max){
		max = number; //if the fifth number is bigger than the max number then the max number is the fifth number
	}
	else if (number < min){
		min = number; //if the fifth number is smaller than the min number then the min number is the fifth number
	}
	cout << "The largest number is " << max << "\n"; //output the largest number of this five numbers
	cout << "The smallest number is " << min << "\n"; //output the smallest number of this five numbers
	return(0); //end of the program

}
