/*
2_DataTypesAndArithmatic.cpp
Project: ProgrammingIntro
Author: Jake Wagner
About: Here we learn more about basic data types and some
of the operators in c++.
*/
#include <iostream>
using namespace std;

int main() {
	/*
	Remember from our previous hello world assignment that main returned an
	integer value, an 'int'. "int" is a built in data type in c++ and tells the
	compiler that the variable we will be using must be an integer value. c++
	has many other predefined data types like a double (number with decimal point),
	char (a character), and several more. To use one of these data types you must
	first declare a variable of that type. For example:
	*/
	int myInteger;
	/*
	int is the data type, myInteger is the name or Identifier given to it for reference.
	You'll notice that myInteger is not initialized to a value yet. This is legal but
	it means that as of now, it could be anything! Lets chnage that using the assignment
	operator to asign myInteger a value.
	/*
	myInteger = 5;
	/*
	Those two lines could be combined into one as well, and my integer could be
	reasigned if you so wish! For example:
	*/
	int anotherInteger = 7;
	myInteger = 3;
	/*
	Now that we have some variables, we can practice some arithmetic with them! c++ has
	several operators to do so: addition (+), subtraction (-), multiplication(*),
	division (/), and modulo (%). We can use these just as you would suspect.
	*/
	int answer = myInteger + anotherInteger; //Created a variable, assigned it a value, and did math all in one line!

											/*
											Perhaps we want to see this math going on? Lets use cout to display our results.
											Notice the different valid ways of displaying several outputs.
											*/

	cout << "The sum of " << myInteger << " and " << anotherInteger << " is " << answer << endl;
	cout << "The product of " << myInteger << " and " << anotherInteger << " is " << myInteger * anotherInteger << endl;

	answer = anotherInteger / myInteger;

	cout << "The quotient of " << anotherInteger << " and " << myInteger << " is " << answer << endl;
	cout << "The quotient of " << anotherInteger << " and " << myInteger << " is " << anotherInteger / myInteger << endl;


	/*
	If you compiled and ran what we had so far the output would be:
	The sum of 3 and 7 is 10
	The product of 3 and 7 is 21
	The quotient of 7 and 3 is 2
	The quotient of 7 and 3 is 2

	answer is an int, so the asnwer stored in it can only be an integer.
	the insertion operator (<<) and cout can take a double and display it to the
	screen no problem. However only an integer is returned by the segment "anotherInt / myInteger".
	This is integer arithematic. Essentailly the compiler enforces this: INT / INT = INT
	If we want precision output (output: 2.33333), we must use a double (or float) like this:
	*/
	double myDouble = 3;
	double anotherDouble = 7;
	double answerDouble = anotherDouble / myDouble;
	cout << "The quotient of " << anotherDouble << " and " << myDouble << " is " << answerDouble << endl;


	system("pause");

return 0;
}






