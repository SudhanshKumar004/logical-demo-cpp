#include <iostream>
using namespace std;
int main()
{
    int number = 0;
    cout << "Enter a Number:" << "\n";
    cin >> number;

    if(number % 5 == 0 )
    {
        cout << "Number is Divisible by 5" << "\n";
    }

    else{
        cout << "Number is not Divisible by 5" << "\n";
    }

    return 0;
}