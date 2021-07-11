//Edit distance
class Solution {
    int memo[750][750];
public:
    int lcs(string s1,string s2,int m,int n)
    {
         if(memo[m][n]!=-1)
        {
            return memo[m][n];
        }
        if(m==0 || n==0)
        {
            memo[m][n] = 0;
        }
        else
        {
            if(s1[m-1]==s2[n-1])
            {
                memo[m][n] = 1 + lcs(s1,s2,m-1,n-1);
            }
            else
            {
                memo[m][n] = max(lcs(s1,s2,m-1,n),lcs(s1,s2,m,n-1));
            }
        }
        return memo[m][n];
    }
    int minDistance(string word1, string word2) {
        int m = word1.length();
        int n= word2.length();
        memset(memo,-1,sizeof(memo));
        int len = lcs(word1,word2,m,n);
        int d = m-len;
        int i = n-len;
        return d+i;
    }
};