class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int>sorted=nums;
        sort(sorted.begin(),sorted.end());
        int low=-1;
        int high=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=sorted[i]){
                if(low==-1){
                    low=i;
                }
                else{
                    high=i;
                }
            }
        }
        if(low==-1 && high==-1){
            return 0;
        }
        return high-low+1;
    }
};