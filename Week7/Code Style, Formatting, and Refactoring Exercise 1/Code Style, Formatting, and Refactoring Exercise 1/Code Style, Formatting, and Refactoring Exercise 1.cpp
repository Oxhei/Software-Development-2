#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(int argc, char** argv) {
  string first_name;
  string last_name;
  string full_name;

  // Request the user's first name and extract it from the input.
  cout << "Please enter your first name: ";
  cin >> first_name;

  // Check if the user's name is "Kevin"
  if (first_name == "Kevin") {
    cout << "Hey! Another Kevin\n";
  } else {
    cout << "Oh well\n";
  }

  // Print the length of the user's first name
  cout << "You entered " << first_name.length()
       << " characters for your first name." << endl;

  // Prompt the user for their last name and read it from input
  cout << "Please enter your last name: ";
  cin >> last_name;

  // Print the length of the user's last name
  cout << "You entered " << last_name.length()
       << " characters for your last name." << endl;

  // Combine the user's first and last name into a full name
  full_name = first_name + " " + last_name;

  // Print the user's full name and its length
  cout << "Your full name is " << full_name << ", which is "
       << full_name.length() << " characters long." << endl;

  return 0;
}
