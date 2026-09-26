class Solution {
public:
  
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,unordered_set<int>>hash;

        for(int i = 0 ; i<strs.size(); i++){
            string temp = strs[i];
            vector<int>temp_hash(26,0);
            for(int j = 0 ; j< temp.size(); j++){
                char ch = temp[j];
                int index = ch - 'a';
                temp_hash[index]++;
            }
            string key = "";
            for(int j = 0 ; j<temp_hash.size(); j++){
                key += char(temp_hash[j]);
            }

            hash[key].insert(i);
        }

        vector<vector<string>>ans; 
        for(auto item : hash){
            unordered_set<int> indexes = item.second;
            vector<string>temp;
            for(int item1 : indexes){
                temp.push_back(strs[item1]);
            }
            ans.push_back(temp);
        }
        return ans;


    }
};
