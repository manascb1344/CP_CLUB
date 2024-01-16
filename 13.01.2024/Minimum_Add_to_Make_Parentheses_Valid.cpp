// https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/

class Solution {
public:
    int minAddToMakeValid(string s) {
        int count = 0;
        stack<char> st;
        for(char c: s){
           if(c=='('){
               st.push(c);
               continue;
           }
           else{
               if(st.size() == 0){
                   count++;
               }
               else if(st.top() == '('){
                   st.pop();
               }
               continue;
           }
           count++;
        }
        int ans= count + st.size();
        return ans;
    }
};