class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      
      int n = nums.size();
      for ( int i = 0 ; i<n ; i++){
        int result = target - nums[i];
        for(int j = 0 ; j<n ; j++){
          if(i == j ) continue ; 
          if (nums[j]==result)return {i,j};
        }
      }

      return{0,0};





    }
};

//for [3,3,4]
//target 7 our output is [1,2] but the output should be [0,2] 
//for this case this solution will not work