class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left=0;
        int right=1;
        int max_val=INT_MIN;
        int n=prices.size();
        while(right<n){
            if(prices[right]>prices[left]){
                max_val=max(max_val,prices[right]-prices[left]);

            }
            else{
                left=right;
            }
            right++;
        }return max(0,max_val);
    }
};