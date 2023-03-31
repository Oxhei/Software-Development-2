// C++ Functions and the void Type.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void print_name(string name)
{
    cout << "Hello " << name << endl;
}

string get_name()
{
    string name;
    cout << "Enter your name: ";
    cin >> name;
    return name;
}

bool check_name(string name)
{
    if (name == "Kevin") {
        cout << "Another " << name << endl;
    }
}


int main(int argc, char **argv)
{
    string name = get_name();
    print_name(name);
    return 0;
}
