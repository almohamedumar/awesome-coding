#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1,101,2,3,100,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max=0;
    int ms[n];
    for(int i=0;i<n;i++)
    {
        ms[i] = arr[i];
    }
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(arr[i]>arr[j] && ms[i] < ms[j] + arr[i] )
            {
                ms[i] = ms[j] + arr[i];
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(max<ms[i])
        {
            max = ms[i];
        }
    }
    cout<<max;
}