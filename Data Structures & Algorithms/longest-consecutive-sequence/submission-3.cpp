class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       unordered_set<int>track;

       for(auto item : nums){
        track.insert(item);
       }

       int max_res = 0 ; 
       int res = 0 ; 
       for(auto item : nums){
            res = 1;
            int curr = item + 1;
            while(track.find(curr)!=track.end()){
                res+=1;
                curr = curr + 1;
            }
            max_res = max(max_res,res);    
       }
       return max_res;



    }
};
