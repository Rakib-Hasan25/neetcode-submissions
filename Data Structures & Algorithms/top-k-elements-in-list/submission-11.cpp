class Solution {
public:

    vector<int> topKFrequent(vector<int>& nums, int k) {
        //step1 : traverse the array , get each element , freq: 
        unordered_map<int,int>hash;
        //1st->element 2nd -> freq;
      
          
        for(int i = 0 ; i<nums.size();i++){
          hash[nums[i]] = hash[nums[i]]+ 1; 
        }


        //step2 : 
       int n = nums.size();
        vector<vector<int>>freq_vector(n+1);

        //step3 : 

        for(auto item : hash){
          int element = item.first;
          int freq = item.second ; 

          freq_vector[freq].push_back(element);
          
        }


        //step4: 

        vector<int>ans; 

        int ct = 0 ;
        for(int i = n ;i>=0 ; i--){
           if(ct == k ) break;

           if(freq_vector[i].size()>0){
              for(int j = 0; j< freq_vector[i].size(); j++){
                if(ct == k ) break; 

                ans.push_back(freq_vector[i][j]);
                ct++;
                
              }

           } 

        }

        return ans;


   
  
  
      }

      
      


   

        

      

     


  
      


    


       
        


 


    };
