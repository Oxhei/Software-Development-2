#include <iostream>
#include <cmath>
using namespace std;

int main() {
    for (int n = 1; n <= 1000; ++n) {
        bool prime = true;
        for (int i = 2; i <= sqrt(n); ++i) {
            if (n % i == 0) {
                prime = false;
                break;
            }
        }
        if (prime) {
            cout << n << endl;
        }
    }
    return 0;
}
