// Interger Types.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using std::cout; // Using standard libary Display output to stream
using std::endl; //Using standard library flush output buffer and insert new line 

int main(int argc, char** argv)
{
	cout << "Size of short: " << sizeof(short) << " bytes" << endl;
	cout << "Size of int: " << sizeof(int) << " bytes" << endl;
	cout << "Size of long: " << sizeof(long) << " bytes" << endl;
	cout << "Size of long long : " << sizeof(long long) << " bytes" << endl;
	return 0;
}