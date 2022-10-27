#include<iostream>

using namespace std;


int main()
{
    int a[10],b[10];
    int temp[10];

    cout << "Enter A Array Element\n";
    for(int i=0;i<10;i++)
    {
        cin>> a[i];
    }

    cout << "Enter B Array Element\n";
    for(int i=0;i<10;i++)
    {
        cin>> b[i];
    }



    for (int i=0;i<10;i++)
    {
        temp[i] = a[i] * b[i];
    }

    cout<< "Multiplication of Array A & B is \n";

    for(int i=0;i<10;i++)
    {
        cout<<temp[i]<<endl;
    }
}
