class Solution
{
public:
void getLeafNode(Node*root,vector<pair<int,int>>&StoreLeafNode,int level){
    if(!root)return ;
    if(root->left==NULL && root->right==NULL){
        StoreLeafNode.push_back({level,root->data});
        return ;
    }
    
    
    getLeafNode(root->left,StoreLeafNode,level+1);
    getLeafNode(root->right,StoreLeafNode,level+1);
}

    int getCount(Node *root, int k)
    {
        //code here
        vector<pair<int,int>>StoreLeafNode;
        int level=1;
        getLeafNode(root,StoreLeafNode,level);
        int cnt=0;
        sort(StoreLeafNode.begin(),StoreLeafNode.end());//can you optimize this?? i thought to use set<pair> but it will not contains duplicats 
        for(auto i:StoreLeafNode){
            if(i.first<=k){
                cnt++;
                k-=i.first;
            }
        }
        
        // for(auto i:StoreLeafNode){
        //     cout<<i.first<<" "<<i.second<<endl;
        // }
        // cout<<endl;
        return cnt;
    }
};
