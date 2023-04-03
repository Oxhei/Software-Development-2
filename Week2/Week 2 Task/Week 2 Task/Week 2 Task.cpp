#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::sort;

int main()
{
    // Seed the random number generator
    srand(time(nullptr));

    // Generate six random numbers between 1 and 50
    vector<int> lotteryNumbers;
    while (lotteryNumbers.size() < 6)
    {
        int num = rand() % 50 + 1;
        if (find(lotteryNumbers.begin(), lotteryNumbers.end(), num) == lotteryNumbers.end())
        {
            lotteryNumbers.push_back(num);
        }
    }

    // Sort the vector
    sort(lotteryNumbers.begin(), lotteryNumbers.end());

    // Ask the user to input their six numbers
    vector<int> userNumbers;
    while (userNumbers.size() < 6)
    {
        int num;
        cout << "Enter number " << userNumbers.size() + 1 << ": ";
        cin >> num;

        // Check if the number is within the valid range
        if (num < 1 || num > 50)
        {
            cout << "Number must be between 1 and 50." << endl;
            continue;
        }

        // Check if the number has already been entered
        if (find(userNumbers.begin(), userNumbers.end(), num) != userNumbers.end())
        {
            cout << "Number has already been entered." << endl;
            continue;
        }

        userNumbers.push_back(num);
    }

    // Sort the user's numbers
    sort(userNumbers.begin(), userNumbers.end());

    // Count the number of matches
    int numMatches = 0;
    for (int i = 0; i < 6; ++i)
    {
        if (userNumbers[i] == lotteryNumbers[i])
        {
            numMatches++;
        }
    }

    // Output the result
    cout << "You matched " << numMatches << " numbers." << endl;

    // Loop until the user enters 0
    while (true)
    {
        cout << "Enter your numbers (0 to quit): ";
        userNumbers.clear();
        while (userNumbers.size() < 6)
        {
            int num;
            cin >> num;

            // Check if the number is within the valid range
            if (num < 0 || num > 50)
            {
                cout << "Number must be between 1 and 50." << endl;
                continue;
            }

            // Check if the number has already been entered
            if (find(userNumbers.begin(), userNumbers.end(), num) != userNumbers.end())
            {
                cout << "Number has already been entered." << endl;
                continue;
            }

            if (num == 0)
            {
                return 0;
            }

            userNumbers.push_back(num);
        }

        // Sort the user's numbers
        sort(userNumbers.begin(), userNumbers.end());

        // Count the number of matches
        numMatches = 0;
        for (int i = 0; i < 6; ++i)
        {
            if (userNumbers[i] == lotteryNumbers[i])
            {
                numMatches++;
            }
        }

        // Output the result
        cout << "You matched " << numMatches << " numbers." << endl;
    }

    return 0;
}
