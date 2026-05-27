class Solution {
public:

    static bool cmp(pair<int,int>&a, pair<int,int>&b){
        if(a.first>b.first)return true;
        else return false;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i = 0 ; i<nums.size();i++){
            mp[nums[i]]++;
        } 


        vector<vector<int>>freq_vec(nums.size()+1);

        for(auto item : mp){
            int element = item.first;
            int freq = item.second;
            freq_vec[freq].push_back(element);
        }   


        vector<int>ans;
        
        for(int i = freq_vec.size()-1 ; i>0 ; i--){
            if(k == 0) break;
            if(freq_vec[i].size()>0){
                for(auto item : freq_vec[i]){
                    if(k==0)break;
                    ans.push_back(item);
                    k--;
                }
            }
        }
        return ans;
       
        



    }
};
