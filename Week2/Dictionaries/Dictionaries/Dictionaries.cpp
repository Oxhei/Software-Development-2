#include <iostream>
#include <string>
#include <unordered_map>

using std::cout;
using std::endl;
using std::string;
using std::unordered_map;

int main(int argc, char** argv)
{
    // Equivalent to line 1 in Python code
    unordered_map<string, string> lecturers;
    // Equivalent to lines 2 to 5 in Python code
    lecturers["Software Development 2"] = "Kevin";
    lecturers["Software Development 1"] = "Arturo";
    lecturers["Databases"] = "Wei";
    lecturers["Computer Systems"] = "Oge";
    // Equivalent to line 6 in Python code
    for (auto entry : lecturers)
    {
        // Equivalent to line 7 in Python code
        cout << entry.first << " " << entry.second << endl;
    }
    return 0;
}