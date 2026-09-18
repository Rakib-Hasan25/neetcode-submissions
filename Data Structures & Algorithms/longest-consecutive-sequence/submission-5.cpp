class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        int ll = 0 ; 
        unordered_set<int>hash;
        int n = nums.size();
        for(int i = 0 ; i<n ; i++){
            hash.insert(nums[i]);
        }

        for(int i = 0; i<n; i++){
            int templ = 1 ; 
            int curr = nums[i];
            if(hash.find(curr-1)!=hash.end())continue;
            while(true){
                curr = curr + 1;
                if(hash.find(curr)!=hash.end()){
                    templ+=1;
                }
                else{
                    break;
                }
            }

            ll = max(ll,templ);
        }

        return ll ; 





    }
};
