class Solution {
public:
    bool isHappy(int n) {
        int temp=n;
        int sum=0;
        vector<int>rem;
        while(true){
            while(temp!=0){
                 int dig=temp%10;
                 temp=temp/10;
                 sum+=(dig*dig);
            }
            if(sum==1){
                return true;
            }
            if(find(rem.begin(),rem.end(),sum)!=rem.end()){
                return false;
            }
            else{
                rem.push_back(sum);
            }
            temp=sum;
            sum=0;
        }
        return false;
    }
};