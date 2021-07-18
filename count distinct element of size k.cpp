int distinct(int arr[],int n,int k)
{
    unordered_set<int> s;
    for(int i=0;i<n-k;i++)
    {
        s.insert(arr+i,arr+k+i);
        cout<<s.size;
    }
}