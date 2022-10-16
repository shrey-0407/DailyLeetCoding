//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  void dfs(vector<vector<int>>& m,vector<bool>&vis,int i){
        vis[i]=true;
        
        for(int j=0;j<m.size();j++){
            if(m[i][j]==1 and !vis[j]){
                dfs(m,vis,j);
            }
        }
    }
    int numProvinces(vector<vector<int>> m, int n) {
        // code here
         int ans=0;
        if(n==0) return 0;
        
        vector<bool>vis(n,false);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                ans++;
                dfs(m,vis,i);
            }
        }
        return ans;
    }
};

    
   

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends