#include <iostream>

using namespace std;

int main() {
    int numerator, denominator, result;

    cout << "Enter the numerator: ";
    cin >> numerator;

    // Set denominator to zero
    denominator = 0;
    cin >> denominator;

    // Divide numerator by denominator
    result = numerator / denominator;

    // Print result
    cout << "Result: " << result << endl;

    return 0;
}
