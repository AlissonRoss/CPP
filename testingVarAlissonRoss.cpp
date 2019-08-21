/*Alisson Ross
8/15/19
Testing errors*/

//C++ is case sensitive 
//include the iostream prewritten library (input/output)
#include <iostream>
//using the standard namespace
using namespace std;

//integer main
int main() {
	//c-output string
	//endl - endline
	//\n end of line character

	//declaring input variables
	//doubles have decimal places
	double div;
	int number1, number2, sum, sub, mult;
	//output
	cout << "Please enter 2 values\n" << endl;
	//Chevron facing the other way for cin
	//grabs input and assigns them into two variables
	cin >> number1 >> number2;
	
	//adding both values
	sum = number1 + number2;
	//subtracting values
	sub = number1 - number2;
	//multiplying values
	mult = number1 * number2;
	//dividing values
	//type casting int number 1 to double for correct input
	div = (double)number1 / number2;
	//output
	cout << "number 1 is " << number1 << 
		"\nnumber 2 is " << number2 << 
		"\nThe sum is " << sum << 
		"\nThe subtraction is " << sub <<
		"\nThe product is " << mult <<
		"\nThe quotient is " << div <<
		endl;
	//one can return any value
	return 0;
	//ctrlv to copy
}