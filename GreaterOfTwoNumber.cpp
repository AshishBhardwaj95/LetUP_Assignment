#include<iostream>
using namespace std;

int main()
{
    int n1,n2;

    cout<<"To Find the Greatest of Two Number\n";
    cout<<"Please Enter First Number";
    cin>>n1;
    cout<<"Please Enter Second Number";
    cin>>n2;

    if(n1 == n2)
    {
        cout<<"Both Number are Equal";
    }
    else if(n1 < n2)
    {
        cout <<n2 << "is greater than" << n1; 
    }
    else
    {
        cout <<n1 << "is greater than" << n2; 
    }
}