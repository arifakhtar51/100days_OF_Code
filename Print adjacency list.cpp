//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return the adjacency list for each vertex.
    vector<vector<int>> printGraph(int V, vector<pair<int,int>>edges) {
        // Code here
         vector<vector<int>>ans(V);
         unordered_map<int,int>mp;
         for(int i=0;i<edges.size();i++){
             int x=edges[i].first;
             int y=edges[i].second;
             ans[x].push_back(y);
             ans[y].push_back(x);
         }
         
         
         return ans;
    }
};
