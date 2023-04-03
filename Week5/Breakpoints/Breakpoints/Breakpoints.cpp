#include <iostream>

using std::cout;
using std::endl;

int sum_digit(int num)
{
    int sum = 0;
    int rem;
    while (num > 9)
    {
        rem = num % 10;
        sum += rem;
        num /= 10;
    }
    sum += num;
    return sum;
}

int main(int argc, char** argv)
{
    int res = sum_digit(1224);
    cout << "The sum of digits " << res << endl;
    return 0;
}