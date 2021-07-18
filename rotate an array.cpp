class Solution {
public:
    void reverse(vector<int> &num,int start,int end)
    {
        while(start>end)
        {
            swap(num[start],num[end]);
            start++;
            end--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        reverse(nums,k+1,n-1);
        reverse(nums,0,k);
        reverse(nums,0,n-1);
    }
};