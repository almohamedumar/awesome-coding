class Solution {
public:
    int ceildx(int tail[],int l,int r,int key)
    {
        while(r>l)
        {
            int m = l + (r-l) /2;
            if(tail[m]>=key)
            {
                r=m;
            }
            else
            {
                l = m+1;
            }
        }
        return r;
    }
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        int tail[n];
        int len=1;
        tail[0] =nums[0];
        for(int i=1;i<n;i++)
        {
            if(nums[i]>tail[len-1])
            {
                tail[len] = nums[i];
                len++;
            }
            else
            {
                int c = ceildx(tail,0,len-1,nums[i]);
                tail[c] = nums[i];
            }
        }
        return len;
    }
};