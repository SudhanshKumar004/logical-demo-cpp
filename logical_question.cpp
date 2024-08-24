#include <iostream>
using namespace std;
int main()
{
    int number = 0;
    cout << "Enter a Number" << "\n";
    cin >> number;

    if(number % 5 == 0)
    {
        cout << "Number is divisible by 5" << "\n";
    }

    else
    {
        int remainder = number % 5;
        int result = 5 - remainder;
        cout << "Add " << result << " to make it divisible by 5" << "\n";
    } 

    return 0;
}