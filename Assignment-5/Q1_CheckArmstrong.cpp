#include <iostream>

using namespace std;

int x=0,y=0;
int GetArmstrong(int num1)
{
    if(num1>0)
    {
        x=num1%10;
        y+=(x*x*x);
        GetArmstrong(num1/10);
    }
    return y;
}


int main()
{
    int num1,num;
    cout << " Enter Number to Check Number is ArmStrong Or Not";
    cin >> num;

    num1 = GetArmstrong(num);

    if(num1==num)
    {
        cout << num <<" is Armstrong";

    }
    else
    {
        cout << num <<" is not Armstrong";
    }
    x=0,y=0;
    return num;
}
