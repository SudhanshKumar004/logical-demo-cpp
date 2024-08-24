/// WAP to accept a number from user, if the number is greater than 100 
// print greater than hundred, otherwise print less than 100.

#include <iostream>
using namespace std;
int main()
{
    int number = 0;
    cout << "Enter a number:" << "\n";
    cin >> number;

    if(number > 100)
    {
        cout << "Greater than hundred" << "\n";
    }

    else
    {
        cout << "Less than hundred" << "\n";
    }
    
    return 0;
}