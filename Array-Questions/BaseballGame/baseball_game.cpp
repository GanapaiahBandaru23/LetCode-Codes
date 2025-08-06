class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>ans;
        for(int i=0;i<operations.size();i++){
            string x=operations[i];
            if(x == "C"){
                ans.pop_back();
            }
            else if(x=="D"){
                ans.push_back(2*ans.back());
            }
            else if(x=="+"){
            
                ans.push_back(ans[ans.size()-1]+ans[ans.size()-2]);
            }
            else{
                ans.push_back(stoi(x));
            }

        }
        
        if(ans.size()==0){
            return 0;
        }
        int sum=0;
        for(int i=0;i<ans.size();i++){
            sum+=ans[i];
        }
        return sum;
        
    }
};