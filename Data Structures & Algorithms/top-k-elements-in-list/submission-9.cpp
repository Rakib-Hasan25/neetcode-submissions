class Solution {
public:

  
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
      //1st step : calculate the freq of each unique element ; 

      unordered_map<int,int>hash;
    
    //key->element, value->freq;
      for(int i = 0 ; i<nums.size();i++){
        hash[nums[i]]++;
      }
       
       //2nd step : store element,freq in a vector; 


    vector<pair<int,int>>temp;
//1st -> freq , 2nd->element;
    for(auto item : hash){
        int element = item.first;
        int freq  = item.second;
        temp.push_back({freq,element});
    }
        
//3rd step : sort the vector based on the freq;(DESC)
    // sort(temp.begin(),temp.end())//asc
    sort(temp.rbegin(),temp.rend());//desc

    vector<int>ans;
    for(int i = 0 ; i<k;i++){
        ans.push_back(temp[i].second);
    }
    return ans;



    }
};
