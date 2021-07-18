int maxsum(int arr[],int k)
{
    int n=arr.size();
    int sum =0,max_sum=0;
    if(n<k)
    {
        return -1;
    }
    for(int i=0;i<k;i++)
    {
        sum+=arr[i];
    }
    for(int i=k;i<n;i++)
    {
        sum+= arr[i]- arr[i-k];
        max_sum = max(sum,max_sum);
    }
    return max_sum;
}