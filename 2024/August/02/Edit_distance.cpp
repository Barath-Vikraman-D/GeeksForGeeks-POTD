//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int editDistance(string str1, string str2) {
        int n=str1.length(),m=str2.length(),i,j;
        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        for(i=0;i<=n;i++) dp[i][0]=i;
        for(i=0;i<=m;i++)dp[0][i]=i;
        for(i=1;i<=n;i++){
            for(j=1;j<=m;j++){
                if(str1[i-1]==str2[j-1]) dp[i][j]=dp[i-1][j-1];
                else
                    dp[i][j] = 1+min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]));
            }
        }
        return dp[n][m];
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
