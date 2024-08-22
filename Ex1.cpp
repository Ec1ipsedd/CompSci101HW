// Both of these are needed for all c++ programs, gives you a lot of the tools you will use frequently.
#include <iostream>
using namespace std;

// Your main function, its a good habit to use one of these
int main() {
   // Initialize variables to ready for input from user.
   // "int" stands for integer, and it readies a place in memory for an integer value.
   int num1;
   int num2;

   // Displays to the output the text that is entered
   // cout can be thought of as "computer/console output" it displays something to the console, in this case, a string.
   cout << "Enter an integer: ";
   // Similar to cout, cin can be thought of as "computer/console input" it waits for the user to type something into the console, and stores it into the variable, "num1" in this case.
   cin >> num1;
   
   // These two do the same thing as the last two.
   cout << "Enter another integer: ";
   cin >> num2;

   // These all display text, followed by the calculations that need to be made.
   // \n is a shortcut for new line, it just makes the output cleaner and easier to read.
   cout << "\nSum of your numbers: " << num1+num2;
   cout << "\nDifference of your numbers: " << num1-num2;
   cout << "\nProduct of your numbers: " << num1*num2;
   cout << "\nQuotient of your numbers: " << num1/num2;
   
   // In case you didn't notice already, most lines of code will end with a semicolon. This basically just tells the computer when to stop listening. 
   // Also, if you don't put a number into the console and put letters instead, it will break the code. This can be fixed but this program doesn't want us to do that. They're also integers, so no decimal will be produced.

   // The return statement ends the function off.
   return 0;
}