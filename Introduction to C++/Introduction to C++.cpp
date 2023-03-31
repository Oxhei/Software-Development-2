// Introduction to C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// (Iostream) 'input-output streams' | "Output" -> to insert data into a stream | "Input" -> or extract data from a stream|
#include <iostream> // Includes (iostream) library
#include <string> //Includes (string) libray

// (std) Using standard library, (cout) display output to the screen
// (std) Using standard library, (cin) To read data from a standard "input" also "input device" | !Which is usually a keyboard!
// (std) Using standard library, (endl) Flush the ouput buffer and insert new line
// (std) Using standard library, (string) 'Commonly used in programs where we need to work with text'
// **********************************************^^^ABOVE IS THE MEANING^^^*********************************************************
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(int argc, char** argv)
{
	string name;
	cout << "Enter your name: "; // Cout means take input to output to user
	cin >> name; // Cin Read what user inputs
	cout << "Hello " << name << endl; // Take user input "Hello " containg the string in 'name' then flush the output to stream and insert new line

	if (name == "Kevin") { // If string 'Name' is "Kevin" perform 
		cout << "Another " << name << endl; // Output user input "Another " name which is the string 'Kevin' then flush stream and start new line
	}

	return 0; // Return the value (Must be at end or carefully presented)
}





