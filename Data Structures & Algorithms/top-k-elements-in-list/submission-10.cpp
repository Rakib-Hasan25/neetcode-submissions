class Solution {
public:

  
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
      //1st step : calculate the freq of each unique element ; 

      unordered_map<int,int>hash;
    
    //key->element, value->freq;
      for(int i = 0 ; i<nums.size();i++){
        hash[nums[i]]++;
      }


      vector<vector<int>>freq_vector(nums.size()+1);


      for(auto item : hash){
        int element = item.first;
        int freq = item .second;

        freq_vector[freq].push_back(element);

      }

        vector<int>ans;

        int ct = 0 ; 
      for(int i = nums.size();i>=0;i--){
            if(ct == k){
                break;
            }
             if(freq_vector[i].size()>0){
                for(int j = 0 ; j<freq_vector[i].size();j++){
                    if(ct==k){
                        break;
                    }
                    ans.push_back(freq_vector[i][j]);
                    ct++;

                }
             }


      }

      return ans;



  
      


    


       
        


 


    }
};
