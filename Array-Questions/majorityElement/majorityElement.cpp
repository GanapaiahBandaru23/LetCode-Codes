class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int maj=1;
        int leader=nums[0];
        for(int i=1;i<n;i++){
            if(maj==0){
                leader=nums[i];
                maj++;

            }
            else{
                if(leader==nums[i]){
                    maj++;
                }
                else{
                    maj--;
                }
            }
        }
        return leader;
        
    }
};