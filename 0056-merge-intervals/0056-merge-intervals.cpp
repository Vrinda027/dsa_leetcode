class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.empty()){
            return {};
        }
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> res;
        res.push_back(intervals[0]);
        int i=1;
        int j=0;
        while(i<intervals.size()){
            if(res[j][1]>=intervals[i][0]){
                res[j][1]=max(res[j][1],intervals[i][1]);
                i++;
            }
            else{
                res.push_back(intervals[i]);
                j++;
                i++;
            }
        }
        return res;
    }
};