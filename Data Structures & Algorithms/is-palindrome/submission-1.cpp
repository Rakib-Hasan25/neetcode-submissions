class Solution {
public:
    bool isPalindrome(string s) {
        
        string temp_s ="";
// isalnum()
// tolower()
        for(int i = 0 ; i<s.size();i++){
            if(isalnum(s[i])){
                temp_s += tolower(s[i]);
            }
        }
        string store_s = temp_s;   
        reverse(temp_s.begin(),temp_s.end());

        if(store_s == temp_s)return true; 
        else return false;

    }
};
