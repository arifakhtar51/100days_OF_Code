class Solution {
public:
    bool isPowerOfTwo(int n) {
       
     
        
        // long pow=1;
        // if(n==1)
        // {
        //     return true;
        // }
        // while(n>pow)
        // {
        //     pow=2*pow;
        //     if(pow==n)
        //     {
        //         return true;
        //     }
        // }
        // return false;
        if(n==0)return 0;
        return n&(n-1)?0:1;//by bits manipulation
    }

};
