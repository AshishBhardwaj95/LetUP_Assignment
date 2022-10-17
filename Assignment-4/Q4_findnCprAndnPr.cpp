#include <iostream>

using namespace std;

int GetFactorial(int num=0)
{
    int sum=1;
    while(num > 0)
    {
        sum*=num;
        num=num-1;
    }
    return sum;
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
    factR = GetFactorial(r);
    factNR = GetFactorial(n-r);

    p= factN/factNR;
    c= p/factR;

    cout << "Permutation is "<< p ;
    cout << "\nCombination is "<< c;
    return 1;
}


