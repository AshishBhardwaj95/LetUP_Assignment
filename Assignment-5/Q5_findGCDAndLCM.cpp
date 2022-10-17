#include <iostream>

using namespace std;

int GetGCD(int n,int n1=0,int n2=0)
{
    if(n>0)
    {
        if(n1%n==0 && n2%n==0)
        {

        }
        else
        {
            n--;
            GetGCD(n,n1,n2);
        }
    }
    return n;
}


int main()
{
    int n1,n2,n;
    int p,lcm,gcd;


    cout << "To Find GCD & LCM Enter Two Number";
    cout<< "\nEnter First Number";
    cin >> n1;
    cout<< "\nEnter Second Number";
    cin >> n2;

    p=n1*n2;

    if(n1 < n2)
    {
        n=n1;
    }else if(n1>n2)
    {
        n=n2;
    }
    else
    {
        n=n1;

    }

    gcd = GetGCD(n,n1,n2);
    lcm = p/gcd;

    cout << "LCM is  "<< lcm ;
    cout << "\nGCD is "<< gcd;
    return 1;
}


