class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n=candyType.size();
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            m[candyType[i]]++;
        }
        int unique=0;
        for(auto res:m){
            unique++;
        }
        return min(n/2,unique);        
    }
};