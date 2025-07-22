class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            if(m.find(nums[i]) != m.end()){
                int prev_index=m[nums[i]];
                if(i-prev_index<=k){
                    return true;
                
                }
                else{
                    m[nums[i]]=i;
                }

            }
            else{
                m[nums[i]]=i;
            }
        }
        return false;
        
    }
};