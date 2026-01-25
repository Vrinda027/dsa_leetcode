class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>pos;
        vector<int>neg;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                neg.push_back(nums[i]*nums[i]);
            }
            else{
                pos.push_back(nums[i]*nums[i]);
            }
        }
        reverse(neg.begin(),neg.end());
        int i=0;
        int j=0;
        vector<int>res;
        while(i<pos.size() && j<neg.size()){
            if(pos[i]<=neg[j]){
                res.push_back(pos[i]);
                i++;
            }
            else if(pos[i]>neg[j]){
                res.push_back(neg[j]);
                j++;
            }
        }
        while(i<pos.size()){
            res.push_back(pos[i]);
            i++;
        }
        while(j<neg.size()){
            res.push_back(neg[j]);
            j++;
        }
        return res;
    }
};