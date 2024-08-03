#include <bits/stdc++.h>
using namespace std;

class Solution {
    int rowSum(vector<vector<int>> &mat,int n,int row){
        int sum=0;
        for(int col=0;col<=n;col++)
            sum+= mat[row][col];
        return sum;
    }
    int colSum(vector<vector<int>> &mat,int n,int col){
        int sum=0;
        for(int row=0;row<=n;row++)
            sum+= mat[row][col];
        return sum;
    }
  public:
    int celebrity(vector<vector<int> >& mat) {
        int known_by,known,n=mat.size()-1;
        for(int row=0;row<=n;row++){
            if(rowSum(mat,n,row)==0 && colSum(mat,n,row)==n)
                return row;
        }
        return -1;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int> > M(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> M[i][j];
            }
        }
        Solution ob;
        cout << ob.celebrity(M) << endl;
    }
}
// } Driver Code Ends
