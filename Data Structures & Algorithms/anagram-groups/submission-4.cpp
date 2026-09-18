class Solution {
public:
  
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,unordered_set<int>>hash;

        for(int i = 0 ; i<strs.size();i++){
            string temp = strs[i];
            sort(temp.begin(),temp.end());
            hash[temp].insert(i);
        }


        vector<vector<string>>ans;
        for(auto item : hash){
            unordered_set<int>temp = item.second; 
            vector<string>temp_vector;
            for(auto item1 : temp){
                temp_vector.push_back(strs[item1]);

            }
            ans.push_back(temp_vector);
        }
        return ans;


    }
};
