class Solution {
public:
    bool isPalindrome(string s) {

     int i = 0 ; 
     int j = s.size()-1;

     while(i<j){
           while(!isalnum(s[i])&&i<j)i++; 
           while(!isalnum(s[j])&&i<j)j--;

           //s[i],s[j] -> alpha

           if(tolower(s[i])==tolower(s[j])){
            i++;
            j--;
           }
           else{
            return false;
           }

     }
     return true;



      
        
     

    }
};
