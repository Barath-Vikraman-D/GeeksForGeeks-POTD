//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int> > &matrix) {
        int n=matrix.size(),m=matrix[0].size();
        vector<int> res;
        int top=0,left=0,bottom=n-1,right=m-1,index;
        while(top<=bottom && left<=right){
            for(index=left;index<=right;index++)
                res.push_back(matrix[top][index]);
            top++;
            for(index=top;index<=bottom;index++)
                res.push_back(matrix[index][right]);
            right--;
            if(top<=bottom){
                for(index=right;index>=left;index--)
                    res.push_back(matrix[bottom][index]);
                bottom--;
            }
            if(left<=right)
            {
                for(index=bottom;index>=top;index--)
                    res.push_back(matrix[index][left]);
                left++;
            }
        }
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int r, c;
        cin >> r >> c;
        vector<vector<int>> matrix(r, vector<int>(c, 0));

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix);
        for (int i = 0; i < result.size(); ++i)
            cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
