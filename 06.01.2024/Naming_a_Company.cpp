// https://leetcode.com/problems/naming-a-company

class Solution {
public:
    long long distinctNames(vector<string>& ideas) {
        long long count = 0;
        int n = ideas.size();
        map <string, int> mp;
        for(string str: ideas){
            mp[str]++;
        }
        for (int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++){
                if(i != j){
                    string s1 = ideas[i];
                    string s2 = ideas[j];
                    int temp = s1[0];
                    s1[0] = s2[0];
                    s2[0] = temp;
                    if(mp[s1] || mp[s2]){
                        continue;
                    }
                    else{
                        count++;
                    }
                }
            }
        }
        return count;
    }
};