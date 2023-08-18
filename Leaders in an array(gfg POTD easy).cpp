class Solution{
  
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        int j=n-1;
        vector<int>ans;
        ans.push_back(a[j--]);
        int indx=0;
      //it is not possible to start from left to right and solve in constant space and linear time 
      //that's why i started from right to left
        while(j>=0){
            if(a[j]>=ans[indx]){
                indx++;
                ans.push_back(a[j]);
            }
            j--;
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};
