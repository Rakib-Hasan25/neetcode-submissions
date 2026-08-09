class Solution {
public:
   
    vector<int> productExceptSelf(vector<int>& nums) {
     
      //step 1 : calculate the pre_mul 
      int n = nums.size();
      vector<int>pre_mul(n,1);
      vector<int>suf_mul(n,1);

      for(int i = 1 ; i<n ; i++){
        pre_mul[i] = pre_mul[i-1]*nums[i-1];
      }

      //step2 : calculat the suff_mul 

      for(int i = n-2 ; i>=0 ; i--){
        suf_mul[i] = suf_mul[i+1]* nums[i+1];
      }

      vector<int>ans(n); 
      

      for(int i = 0 ; i<n ; i++){
        ans[i] = pre_mul[i]*suf_mul[i];
      }


      return ans;
  



    }
};