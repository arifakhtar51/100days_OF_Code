class Solution{
  public:
    // Return True if the given trees are isomotphic. Else return False.
    bool isIsomorphic(Node *root1,Node *root2)
    {
    //add code here.
    if(!root1 && !root2){
        return 1;
    }
    if(!root1 && root2 || (root1 && !root2)){
        return 0;
    }
    
    if(root1->data!=root2->data){
        return false;
    }
    
    bool lans=isIsomorphic(root1->left,root2->right);
    bool rans=isIsomorphic(root1->right,root2->left);
    
    bool Lans=isIsomorphic(root1->right,root2->right);
    bool Rans=isIsomorphic(root1->left,root2->left);
    
    return (lans&& rans) || (Lans&& Rans);
        
    }
};


