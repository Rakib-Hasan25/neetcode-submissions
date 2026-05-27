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
        vector<pair<int,int>>temp;
        for(auto item : mp){
            int key = item.first;
            int freq = item.second;
            temp.push_back({freq,key});
        }

        sort(temp.begin(),temp.end(),cmp);

        vector<int>ans;
        for(int i = 0 ; i <temp.size();i++){
            int freq = temp[i].first;
            int key = temp[i].second;
            // cout<<key<<"key"<<endl;
            // cout<<freq<<"freq"<<endl;
            if(k==0)break;
            ans.push_back(key);
            k--;
        }
        return ans;



    }
};
