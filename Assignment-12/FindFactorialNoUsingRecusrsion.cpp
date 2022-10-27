#include <iostream>

using namespace std;

int s=1;
int GetFactorial(int num1)
{
    if(num1>0)
    {
        s*=num1;
        GetFactorial(num1-1);
    }
    return s;
}


int main()
{
    int num,sum;
    cout << " Enter Number to Find Factorial";
    cin >> num;

    sum= GetFactorial(num);
    cout << "Factorial of "<<num << " is " << sum;

    return num;
}
