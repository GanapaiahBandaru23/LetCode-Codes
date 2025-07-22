class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        int carry=0;

        if(digits[n-1]+1>=10){
            int sum=digits[n-1]+1;
            carry=sum/10;
            digits[n-1]=sum%10;
        }
        else{
            int sum2=digits[n-1]+1;
            digits[n-1]=sum2;
        }


        for(int i=n-2;i>=0;i--){
            if(digits[i]+carry>=10){
                int sum=digits[i]+carry;
                carry=sum/10;
                digits[i]=sum%10;
            }
            else{
                int sum=digits[i]+1;
                digits[i]=digits[i]+carry;
                carry=0;
            }
        }
        if(carry==1){
            digits.insert(digits.begin(),1);
        }
        return digits;
    }
};