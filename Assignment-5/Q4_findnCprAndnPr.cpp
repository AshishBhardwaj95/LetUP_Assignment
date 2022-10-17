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
    int n,r;
    int p,c;
    int factN,factR,factNR;


    cout << "To Find nPr(Permutation) & nCr(Combination) First Enter 'n' then 'r'";
    cout<< "\nEnter n";
    cin >> n;
    cout<< "\nEnter r";
    cin >> r;

    factN = GetFactorial(n);
    s=1;
    factR = GetFactorial(r);
    s=1;
    factNR = GetFactorial(n-r);

    p= factN/factNR;
    c= p/factR;

    cout << "Permutation is "<< p ;
    cout << "\nCombination is "<< c;
    return 1;
}


