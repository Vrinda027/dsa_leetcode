class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int low=0;
        unordered_map<int,int>count;
        int res=-1;
        for(int high=0;high<fruits.size();high++){
            count[fruits[high]]++;
            while(count.size()>2){
                count[fruits[low]]--;
                if(count[fruits[low]]==0){
                    count.erase(fruits[low]);
                }
                low++;
            }
            if(count.size()<=2){
                int sum=high-low+1;
                res=max(sum,res);
            }

        }
        return res;
    }
};