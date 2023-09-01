void solve(Node*root,  map<int,vector<int>>&mp,int d){//simpre preorder traversal
    if(!root)return ;
    
    mp[d].push_back(root->data);
    solve(root->left,mp,d+1);
    solve(root->right,mp,d+1);
}
void printCorner(Node *root)
{

// Your code goes here
    map<int,vector<int>>mp;//taking map that store all elements in each level
    int d=0;
    solve(root,mp,d);
    
    for(auto i:mp){
        cout<<i.second[0]<<" ";
        if(i.second.size()>1){
           cout<<i.second[i.second.size()-1]<<" ";
        }
    }
    
}
