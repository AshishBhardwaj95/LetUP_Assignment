#include <iostream>
using namespace std;
 int a[10] = {23,2,5,67,45,88,1,20,33,64};

int Partition(int s, int e)
{
    int pivot = a[e];
    int pindex = s;
    for(int i=s;i<e;i++)
    {
        if(a[i]<=pivot)
        {
            int tmp = a[i];
            a[i]= a[pindex];
            a[pindex] = tmp;
            pindex++;
        }
    }
    
    int tmps = a[e];
    a[e]= a[pindex];
    a[pindex] = tmps;
    
    return pindex;
}


void QuickSort(int s , int e)
{
    if(s<e)
    {
        int p=Partition(s,e);
        QuickSort(s,p-1);
        QuickSort(p+1,e);
    }
   
}

int main() {
   
    QuickSort(0,9);
    
     for(int i=0;i<10;i++)
    {
        cout<< a[i]<<"\n";
    }
    return 0;
}
