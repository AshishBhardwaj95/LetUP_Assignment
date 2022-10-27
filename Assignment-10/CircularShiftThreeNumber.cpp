#include<iostream>

using namespace std;


int CircualShift(int *x,int *y,int *z)
{
    int temp;
    temp = *x;
    *x=*z;
    *z= *y;
    *y=temp;
    return 0;
}

int main()
{
   int x,y,z;
    cout << "Enter three number\n";
    cout<<"1st ";
    cin>> x;
    cout << "2nd ";
    cin>>y;
    cout << "3rd ";
    cin >>z;
    cout <<endl;

    CircualShift(&x,&y,&z);
    cout << "After Circular Shift "<<endl;

    cout<<"1st "<<x<<endl;
    cout<<"2nd "<<y<<endl;
    cout<<"3rd "<<z<<endl;
}


