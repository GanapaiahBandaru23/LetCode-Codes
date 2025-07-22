class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>m;
        int n=nums.size();
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        bool ans=false;
        for(auto res:m){
            if(res.second >=2){
                ans=true;
                break;
            }
        }
        return ans;
    }
};