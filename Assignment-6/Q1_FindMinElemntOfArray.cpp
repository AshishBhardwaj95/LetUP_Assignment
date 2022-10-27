#include<iostream>

using namespace std;


int main()
{
    int a[10];
    int temp=0;

    for(int i=0;i<10;i++)
    {
        cin>> a[i];
    }

    temp=a[0];
    for (int i=1;i<10;i++)
    {
        if(temp > a[i])
        {
            temp = a[i];
        }
    }

    cout<< "Minimum Element of Array is " << temp;
}
