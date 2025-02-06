#include <string>
#include <iostream>
using namespace std;

int factorial(int n)
{
    int result;

    // reach base case
    if (n < 0)
        result = -1;
    else if (n == 0)
        result = 1;
    // below formula helps find factorial
    else
        result = n * factorial(n - 1);

    return result;
}

int main()
{
    int num;
    cout << "Enter number for factorial to be calculated";
    cin >> num;

    cout << "Factorial is " << factorial(num) << endl;

    return 0;
}
