#include<bits/stdc++.h>
using namespace std;
int mincoins(int arr[],int n,int value)
{
    int dp[value+1];
    dp[0]=0;
    for(int i=1;i<=value;i++)
    {
        dp[i] = INT_MAX;
    }
    for(int i=1;i<=value;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[j]<=i)
            {
                int subres = dp[i-arr[j]];
                if(subres!=INT_MAX && subres+1<dp[i])
                {
                    dp[i] = subres + 1;
                }
            }
        }
    }
    return dp[value];
}
int main() 
{
	
int arr[] = {3, 4, 1}, val =5, n =3;

cout<<mincoins(arr, n, val);
	

}