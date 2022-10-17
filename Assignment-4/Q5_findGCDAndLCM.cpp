#include <iostream>

using namespace std;

int GetGCD(int num1=0,int num2=0)
{
    int num=0;
    if(num1 < num2)
    {
        num=num1;
    }else if(num1>num2)
    {
        num=num2;
    }else
    {
        num=num1;

    }

    while(num>0)
    {
        if(num1%num==0 && num2%num==0)
        {
            break;
        }
        num--;
    }
    return num;
}


int main()
{
    int n1,n2;
    int p,lcm,gcd;


    cout << "To Find GCD & LCM Enter Two Number";
    cout<< "\nEnter First Number";
    cin >> n1;
    cout<< "\nEnter Second Number";
    cin >> n2;

    p=n1*n2;
    gcd = GetGCD(n1,n2);
    lcm = p/gcd;

    cout << "LCM is  "<< lcm ;
    cout << "\nGCD is "<< gcd;
    return 1;
}


