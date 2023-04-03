#include <iostream>
using namespace std;

int main() {
    int x = 0;
    for (int i = 1; i < 10; ++i) {
        x *= i;
    }
    cout << x << endl; // outputs 0
    return 0;
}
