class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];

        do{
            // cout<<"slow "<<slow<<endl;
            // cout<<"fast "<<fast<<endl;
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while(slow!=fast);
        // cout<<slow<<endl;

        int slow1 = slow;
        int slow2 = nums[0];

        while(slow1!=slow2){
            cout<<"slow1 "<<slow1<<endl;
            cout<<"slow2 "<<slow2<<endl;
            slow1 = nums[slow1];
            slow2 = nums[slow2];
        }
        return slow1;

    }
};
