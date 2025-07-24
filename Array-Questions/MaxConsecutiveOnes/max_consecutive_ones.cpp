class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        int max_ele=0;
        int count=0;
    
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                count++;
                max_ele=max(max_ele,count);
            }
            else{
                count=0;
            }
            
        }
        return max_ele;

        
    }
};