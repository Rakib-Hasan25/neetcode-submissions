class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      
    int n = nums.size();        
    unordered_map<int,int>hash; 
    //key-> element , value -> index; 

    


    for(int i = 0 ; i< n ; i++){
        int result = target - nums[i];
        if(hash.find(result)!=hash.end() ){
            return {hash[result],i};
        }
        else{
            hash[nums[i]]=i ;
        }
    }
    return {};
    
    }
};

//for [3,3,4]
//target 7 our output is [1,2] but the output should be [0,2] 
//for this case this solution will not work