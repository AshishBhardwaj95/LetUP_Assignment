#include <iostream>

using namespace std;

int s=0;
int GetSumOfNumber(int numL,int numU)
{
    if(numL<numU)
    {
        if((numL%3!=0) && (numU%5 !=0))
        {
            s+=numL;
            numL++;
            GetSumOfNumber(numL,numU);
        }
    }
    return s;
}


int main()
{
    int numL,numU;
    int sum=0;

    cout << " Enter Lower Limit";
    cin >> numL;

    cout << " Enter Upper Limit";
    cin >> numU;

    sum=GetSumOfNumber(numL+1,numU);

    cout << "Sum of Number Between "<<numL << " and  " << numU << "expect divisible by 3 & 5 is " << sum;
    return sum;
}
