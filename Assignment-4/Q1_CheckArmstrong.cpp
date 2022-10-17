#include <iostream>

using namespace std;

int main()
{
    int num,num1;
    int x=0,y=0;
    cout << " Enter Number to Check Number is ArmStrong Or Not";
    cin >> num;
    num1=num;

    while(num1>0)
    {
        x=num1%10;
        y+=(x*x*x);
        num1=num1/10;
    }

    if(y==num)
    {
        cout << num <<" is Armstrong";

    }
    else
    {
        cout << num <<" is not Armstrong";
    }

    return num;
}
