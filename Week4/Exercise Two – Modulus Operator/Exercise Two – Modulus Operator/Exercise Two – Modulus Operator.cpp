#include <iostream>
using namespace std;

int main() {
    int x = 0;
    while (x < 10) {
        if (x % 2 == 0) {
            x += 1;
        }
        else {
            x *= 2;
        }
    }
    cout << x << endl; // outputs 10
    return 0;
}

