/*
  2_BasicIO.cpp
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
  int is the data type, myInteger is the name i gave it for reference.
  You'll notice taht myInteger is not initialized to a value yet. This is legal but
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
  int answer = myInteger + antherInteger; //i created a variable, assigned it a value, and did math all in one line!
  
/*
  Perhaps we want to see this math going on? Lets use cout to display our results.
  Notice the different valid ways of displaying several outputs.
*/

  cout << "The sum of " << myInteger << " and " << anotherInteger << " is " << answer << endl;
  cout << "The product of " << myInteger << " and " << anotherInteger << " is " << myInteger * anotherInteger << endl;
  
  answer = anotherInt / myInteger;
  
  cout << "The quotient of " << anotherInt << " and " << myInteger << " is " << answer << endl;
  cout << "The quotient of " << anotherInt << " and " << myInteger << " is " << anotherInt / myInteger << endl;
  
  
/*
  If you compiled and ran what we had so far the output would be:
      The sum of 3 and 7 is 10
      The product of 3 and 7 is 21
      The quotient of 7 and 3 is 2
      The quotient of 7 and 3 is 2.3333
      
   answer is an int, so the asnwer stored in it can only be an integer.
   the insertion operator (<<) and cout can take a double and display it to the
   screen no problem, and that is what is returned by the segment "anotherInt / myInteger".
   It would be essentially the same as if we had done this:
*/
  double myDouble = anotherInt / myInteger;
  cout << The quotient of " << anotherInt << " and " << myInteger << " is " << myDouble << endl;


  return 0;
}







