#include <iostream>
using namespace std;

int main() {
    int num = 0;
    for (int i = 1; i <= 1000; ++i) {
        if (i % 3 == 0 || i % 5 == 0) {
            num += i;
        }
    }
    cout << num << endl; // outputs the sum of all the numbers from 1 to 1000 that are divisible by 3 or 5
    return 0;
}
