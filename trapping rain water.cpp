class Solution {
public:
    int trap(vector<int>& arr) {
    if(arr.empty())
    {
        return 0;
    }
    int n= arr.size();
    vector<int> left(n);
    vector<int> right(n);
    int water =0;
    left[0] = arr[0];
    for(int i=1;i<n;i++)
    {
        left[i] = max(left[i-1],arr[i]);
    }
    right[n-1] = arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        right[i] = max(arr[i],right[i+1]);
    }
    for(int i=0;i<n;i++)
    {
        water += min(left[i],right[i])-arr[i];
    }
    return water;
        
    }
};