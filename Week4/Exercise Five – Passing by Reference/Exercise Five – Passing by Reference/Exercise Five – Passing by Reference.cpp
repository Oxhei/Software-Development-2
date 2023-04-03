#include <iostream>
#include <cmath>
using namespace std;

void change(int& x) // pass by reference using &
{
    x = 100;
}

int main(int argc, char** argv)
{
    int x = 5;
    change(x);
    cout << x << endl;
    return 0;
}
