class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sp=0;
         int n = t.length();
        if(s.length() == 0) return true;
        for(int i =0; i<n; i++)
        {
            if(s[sp] == t[i]){
                sp++;
                if(sp == s.length()) return true;
            }
        }
      return false;
    }
};