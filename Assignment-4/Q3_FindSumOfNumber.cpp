#include <iostream>

using namespace std;

int main()
{
    int numL,numU;
    int sum=0;

    cout << " Enter Lower Limit";
    cin >> numL;

    cout << " Enter Upper Limit";
    cin >> numU;

    for(int i=numL+1;i<numU;i++)
    {
        if((i%3 != 0) && (i%5 != 0))
        {
            sum+=i;
        }
    }

    cout << "Sum of Number Between "<<numL << " and  " << numU << "expect divisible by 3 & 5 is " << sum;

    return sum;
}
