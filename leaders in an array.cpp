void printleaders(int arr[],int n)
{
    int max = arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>max)
        {
            max = arr[i];
            cout<<max;
        }
    }
}