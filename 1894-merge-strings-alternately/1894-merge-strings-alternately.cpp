class Solution {
public:
    string mergeAlternately(string word1, string word2) {
       
        string ans ="";
        int w1 =0;
        int w2 =0;
        while(w1 < word1.length() || w2 < word2.length())
        {
           
            if(w1 < word1.length())
           {
            ans = ans + word1[w1];
                w1++;
            }
            if(w2 < word2.length())
             {
            ans = ans + word2[w2];
                w2++;
             }
        }
        
        return ans;
    }
    
};