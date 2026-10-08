class Solution {
public:
    string removeOuterParentheses(string s) {
        string result;
        int order =0;

        for(int i=0;i<s.size()-1;i++){
          if(s[i]=='('){
            if(order>=1){
                result+=s[i];
            }
          order++;
          }
          else{
            order--;
            if(order>=1){
                result+=s[i]; 
            }
          }
        }
        return result;
    }

};