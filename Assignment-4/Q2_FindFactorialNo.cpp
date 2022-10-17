#include <iostream>

using namespace std;

int main()
{
    int num,num1;
    int sum=1;
    cout << " Enter Number to Find Factorial";
    cin >> num;
    num1=num;
    while(num > 0)
    {
        sum*=num;
        num=num-1;
    }

    cout << "Factorial of "<<num1 << " is " << sum;

    return num;
}
