class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size();
        int max_1=INT_MIN;
        int max_2=INT_MIN;
        int max_3=INT_MIN;
        for(int i=0;i<n;i++){
            if(max_1 < nums[i]){
                max_3=max_2;
                max_2=max_1;
                max_1=nums[i];

            }
            else if(max_2 <nums[i]){
                max_3=max_2;
                max_2=nums[i];
            }
            else if(max_3 < nums[i]){
                max_3=nums[i];
            }
        }

        int negative_1=INT_MAX;
        int negative_2=INT_MAX;
        int negCount=0;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                if(nums[i]<negative_1){
                    negative_2=negative_1;
                    negative_1=nums[i];
                }
                else if(nums[i]<negative_2){
                    negative_2=nums[i];
                }
                negCount++;
            }
        }
        
        int option_1=max_1*max_2*max_3;
        int option_2=INT_MIN;
        if(negCount>=2){
            option_2=max_1 * negative_1 * negative_2;
        }
        return max(option_1,option_2);
        
    }
};