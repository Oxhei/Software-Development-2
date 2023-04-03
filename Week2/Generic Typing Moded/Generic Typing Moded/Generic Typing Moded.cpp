#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::sort;

int main(int argc, char** argv)
{
    // Equivalent to line 1 in Python code
    vector<string> data;
    // Equivalent to line 2 in Python code
    for (int i = 0; i < 10; ++i)
    {
        // These three lines are equivalent to line 3 in Python code
        string str;
        cout << "Enter data: ";
        cin >> str;
        // Equivalent to line 4 in Python code
        data.push_back(str);
    }
    cout << "Sorting..." << endl;
    // Equivalent to line 5 in Python code
    sort(data.begin(), data.end());
    // Equivalent to line 6 in Python code
    for (string str : data)
    {
        // Equivalent to line 7 in Python code
        cout << str << endl;
    }
    return 0;
}