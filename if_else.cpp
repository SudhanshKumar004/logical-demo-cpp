#include <iostream>
using namespace std;
int main()
{
    int number = 0;
    cout << "Enter a number" << "\n";
    cin >> number;

    if(number % 2 == 0) 
    {
       cout << "Even Number" << "\n";  
    }

    else
    {
        cout  << "Odd Number" << "\n";
    }

    return 0;
}