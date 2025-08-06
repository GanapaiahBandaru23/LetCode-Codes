class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        map<string,int>un;
        for(int i=0;i<list1.size();i++){
            un[list1[i]]=i;
        }
        int miniSum=INT_MAX;
        map<string,int> indexSumMap;
        for(int j=0;j<list2.size();j++){
            if(un.find(list2[j]) != un.end()){
                int sum=j+un[list2[j]];
                indexSumMap[list2[j]]=sum;
                miniSum=min(miniSum,sum);
            
            }
            
        }
        vector<string>v;
        for(auto &pair:indexSumMap){
            if(pair.second==miniSum){
                v.push_back(pair.first);
            }
        }
        return v;
    }
};