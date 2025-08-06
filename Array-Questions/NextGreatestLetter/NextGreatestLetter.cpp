class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char value=letters[0];
        for(int i=0;i<letters.size();i++){
            if(letters[i]>target){
                value=letters[i];
                break;
                
            }

        }
        return value;
    }
}