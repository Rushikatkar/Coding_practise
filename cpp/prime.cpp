#include<iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter the number: ";
    cin >> number;
int  factorial = 1;
    for (int i = 1; i <= number; i++) {
        factorial = factorial * i;
    }

    cout << "The factorial of " << number << " is: " << factorial;
    return 0;
}
