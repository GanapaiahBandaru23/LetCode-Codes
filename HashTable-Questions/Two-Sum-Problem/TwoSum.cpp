class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>ans;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            m[nums[i]]=i;
        }
        int i=0;
        while(i<n){
            int value=target-nums[i];
            if(m.find(value) !=m.end() && m[value] !=i){
                ans.push_back(i);
                ans.push_back(m[value]);
                break;
            }
            i++;
        }
        return ans;
    }
};