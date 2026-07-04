class Solution {
public:
   
    vector<int> productExceptSelf(vector<int>& nums) {
     
      //1st -> pre_mul 

      vector<int>pre_mul(nums.size(),1);

      for(int i = 1 ; i<nums.size();i++){
          pre_mul[i] = pre_mul[i-1]*nums[i-1];
      }




      //2nd-> suf_mul 

      vector<int>suf_mul(nums.size(),1);

      for(int i = nums.size()-2;i>=0; i--){
        suf_mul[i] = suf_mul[i+1]*nums[i+1];
      }

      //3rd -> mul between pre_mul and suf_mul

      vector<int>ans(nums.size(),1);


      for(int i = 0 ; i<nums.size();i++){
        ans[i]=pre_mul[i]*suf_mul[i];
      }


      return ans;



    }
};