#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc, char** argv)
{
    int num;
    int total = 1;  // -------- initialize total to 1 --------
    cout << "Enter the number: ";
    cin >> num;
    for (int i = 1; i <= num; ++i)  // -------- change loop condition to i <= num --------
    {
        total = total * i;
    }
    cout << "The factorial of " << num << " is " << total << endl;
    return 0;
}
