class Solution {
public:
    string encode(vector<string>& strs) {
        if(strs.size()==0)return "";

        string ans = "";

        for(int i = 0 ; i<strs.size();i++){
            ans+=to_string(strs[i].size());
            ans+=",";
        }
        ans+='#';

        for(int i = 0 ; i<strs.size();i++){
            ans+=strs[i];
        }

        return ans;

    }

    vector<string> decode(string s) {

        if(s.size()==0)return {};

        vector<int>sizes;

        int i = 0 ;
        string temp = ""; 
        while(s[i]!='#'){
            if(s[i]==','){
                sizes.push_back(stoi(temp));
                temp = "";
            }
            else{
                temp+=s[i];
              
            }
            i++;
        }
        i++;
        

        vector<string>ans_vector;
        for(int j = 0 ; j<sizes.size(); j++){
            if(sizes[j]==0){
                ans_vector.push_back("");
                continue ;
            }
        
            ans_vector.push_back(s.substr(i,sizes[j]));
            i+=sizes[j];
            
        }

        return ans_vector;
        
    }
};