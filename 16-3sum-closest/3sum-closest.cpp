class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int mini=INT_MAX;
        int sum=-1;
        for(int k=0;k<nums.size();k++){
            int i=k+1;
            int j=nums.size()-1;
            int targe=target-nums[k];
            while(i<j){
                int total = nums[k] + nums[i] + nums[j];
                int diff = abs(target - total);
                if(total==target){
                    sum=target;
                    return sum;
                }
                else if(nums[i]+nums[j]<targe){
                    if(diff<mini){
                        sum=total;
                        mini=diff;
                    }
                    i++;
                }
                else{
                    if(diff<mini){
                        sum=total;
                        mini=diff;

                    }
                    j--;
                }
            }
        }
        return sum;
    }
};