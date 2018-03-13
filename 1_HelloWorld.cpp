//Two slashes like those << indicate that this line, really everything 
//after the double slashes on this line is a "comment."
//This means that it is not code, it is not compiled, and is used only 
//for you, the programmer, to leave notes in your code to explain what
//you are doing and what things are. This is VERY useful for when another
//person has to figure out what your program does!

/*
  This slash asterisk combo then asterisk slash indicates a group of lines that
  are all comments. Its nice when you are going to write a large amount of
  comments and dont want to keep putting // at the start of every line you
  want to comment out.
  It is wise, clean, and professional to start every program with a small comment
  section like this that includes the name of the file, encompassing project,
  progammer, date, et ecetera. Start developing good habits as soon as you can!
  For example, this is similar to what I would put at the top of a file like this:
  
  1_HelloWorld.cpp
  Project: ProgrammingIntro
  Author: Jake Wagner
  Began: March 13, 2018
  Abuot: My first program!
*/


#include <iostream>
/*
  This is a "preprocessor statement". It tells the linker to include the header
  file "iostream" (which should be included standard in any compiler / coding 
  you are using enviornment). This file includes some basic functions that we will use to
  interact with the machine/user, AKA I/O. For our purposes, it will essentially always be
  neccesary to include this for our lessons.
*/

using namespace std;
/*
  This line is technically not neccessary, but I suggest it because it makes things a
  bit easier/cleaner. What this does is essentially set the default scope for constants
  and functions that we have included. It tells the compiler that when we say "cout << ..."
  that we are refering to the "cout" object and "<<" operator as defined for cout in the
  header file "iostream."
  If this all sounds too complicated or is too much info coming at you at once, dont worry
  about it too much, there will be future lessons on scope. :)
*/


/*
  every c++ program MUST have a main program(below). This is where execution starts when your
  program begins to run! the "int" at the beging is the "return type" for the function
  called main. (You KNOW its a function because of the parenthesis!). In c++ main must return
  an integer value. So, this function header indicates that the function main will return 
  an int, the keyword for integer. Those parenthesis also indicate that 'main' is a function,
  they encompass the function paramters. In our main, there is nothing, which is ok! When we 
  design more complicated functions however, you may include parameters as part of the function
  defintion! Again, dont worry too much about all this yet, there is just allot of vocab to
  start to get familiar wit. :)
*/
int main() {
  cout << "Hello World!" << endl; //this line calls cout to display the string literal (whats in "",
                                  //to the command line, and then a newline character "endl" to 
                                  //put our cursor at the next line.
                                  
  system("pause"); //This is only necessary for some poeple, depending on your coding enviornemnt,
                   //so that you can admir your hard work!
  return 0; //this line returns, or ends the current program. Notice it is returning 0, an integer
            //value to the calling program, in this case the system.
}
/*
  Notice the curly braces at the start of the definiton for main and at the end. These encompass
  the scope of 'main'. c++ as a language requires that functions be enclosed in these braces.
  
  Well, thats it! Good job! Go ahead and compile this and run it!
*/




/* 
  For a clean look, here is everything neccesary without the comments!


#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!" << endl;
  return 0;
}



*/
