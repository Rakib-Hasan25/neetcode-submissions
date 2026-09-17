class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      map<int,int>m;
     
      for(int i = 0 ;i<nums.size();i++ ){
      
        if(m.find(target-nums[i]) != m.end() && m[target-nums[i]] != i ){
            return {m[target-nums[i]],i};
        }
        else{
             m[nums[i]] = i;
        }
      }
    }
};

//for [3,3,4]
//target 7 our output is [1,2] but the output should be [0,2] 
//for this case this solution will not work