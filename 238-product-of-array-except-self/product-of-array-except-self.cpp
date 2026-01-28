class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> p(nums.size());
        vector<int>s(nums.size());
        vector<int>res(nums.size());
        p[0]=1;
        for(int i=1;i<nums.size();i++){
            p[i]=nums[i-1]*p[i-1];
        }
        s[nums.size()-1]=1;
        for(int j=nums.size()-2;j>=0;j--){
            s[j]=nums[j+1]*s[j+1];
        }
        for(int i=0;i<nums.size();i++){
            res[i]=p[i]*s[i];
        }
        return res;
    }
};