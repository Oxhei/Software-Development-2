#include <iostream>

using std::cout;
using std::endl;

int my_function(int x, int y)
{
    cout << "my_function entered. x = " << x << " y = " << y << endl;
    int temp = 0;
    if (y != 0) {
        temp = x / y;
    }
    else {
        cout << "Error: division by zero" << endl;
    }
    cout << "my_function exiting. Returning " << temp << endl;
    return temp;
}

int main(int argc, char** argv)
{
    int x = 5;
    int y = 10;
    cout << "Calling my_function with " << x << " " << y << endl;
    int result = my_function(x, y);
    cout << "my_function returned " << result << endl;
    x = 20;
    y = 2;
    cout << "Calling my_function with " << x << " " << y << endl;
    result = my_function(x, y);
    printf("my_function returned %d\n", result);
    x = 100;
    y = 0;
    cout << "Calling my_function with " << x << " " << y << endl;
    result = my_function(x, y);
    cout << "my_function returned " << result << endl;
    return 0;
}
