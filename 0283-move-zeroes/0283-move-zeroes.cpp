class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        int j=0;
        while(j<nums.size()){
            if(nums[i]==0 && nums[j]==0){
                j++;
                continue;
            }
            if(nums[j]!=0 && nums[i]==0){
                nums[i]=nums[j];
                nums[j]=0;
                j++;
                i++;
                continue;
            }
            if(nums[i]!=0){
                i++;
                if(j<i){
                    j=i;
                }
            }
        }
    }
};