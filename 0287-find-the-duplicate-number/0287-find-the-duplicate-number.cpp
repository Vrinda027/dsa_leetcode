class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>count;
        for(int i=0;i<nums.size();i++){
            count[nums[i]]++;
        }
        for(auto it:count){
            if(it.second>=2){
                return it.first;
            }
        }
        return -1;
    }
};