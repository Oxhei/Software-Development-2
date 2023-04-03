#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::getline;
using std::stoi;
using std::endl;
using std::setw;
using std::setfill;
using std::string;
using std::vector;

// Our student datatype
struct student
{
    unsigned int id;
    string name;
    string address;
};

// Prints a student.
void print_student(student s)
{
    cout << setw(12) << setfill('0') << s.id << setfill(' ');
    cout << setw(30) << s.name;
    cout << setw(40) << s.address;
    cout << endl;
}

// Reads student data.
student read_student()
{
    student s;
    string tmp;
    cout << "Enter id: ";
    // Read line from keyboard into temp string
    getline(cin, tmp);
    // Convert temp string to int and set student id
    s.id = stoi(tmp);
    cout << "Enter name: ";
    // Read line from keyboard into student name
    getline(cin, s.name);
    cout << "Enter address: ";
    // Read line from keyboard into student address
    getline(cin, s.address);
    return s;
}

int main(int argc, char **argv)
{
    // A list of students
    vector<student> students;
    // Fill list of students with 10 students
    for (int i = 0; i < 10; ++i)
    {
        students.push_back(read_student());
    }
    // Print table header
    cout << setw(12) << "ID Number";
    cout << setw(30) << "Name";
    cout << setw(40) << "Address";
    cout << endl;
    // Print list of students
    for (auto s : students)
    {
        print_student(s);
    }
    return 0;
}