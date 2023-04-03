#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::setfill;
using std::setw;
using std::stoi;
using std::string;
using std::vector;

// Define a struct to hold information about a person
struct Person {
  unsigned int id;
  string name;
  string address;
};

// Define a function to print information about a person
void print_person(Person p) {
  cout << setw(12) << setfill('0') << p.id << setfill(' ') << setw(30) << p.name
       << setw(40) << p.address << endl;
}

// Define a function to prompt the user for information about a person and
// return it as a Person object
Person get_person_info() {
  Person p;
  string id_str;
  cout << "Enter id: ";
  getline(cin, id_str);
  p.id = stoi(id_str);
  cout << "Enter name: ";
  getline(cin, p.name);
  cout << "Enter address: ";
  getline(cin, p.address);
  return p;
}

int main(int argc, char** argv) {
  // Create a vector to hold information about multiple people
  vector<Person> people;

  // Prompt the user to enter information about 10 people and store it in the
  // vector
  for (int i = 0; i < 10; ++i) {
    people.push_back(get_person_info());
  }

  // Print a header for the table of information
  cout << setw(12) << "ID Number" << setw(30) << "Name" << setw(40) << "Address"
       << endl;

  // Print the information about each person in the vector
  for (auto p : people) {
    print_person(p);
  }

  return 0;
}
