class Solution {
public:
    int maxVowels(string s, int k) {
        string temp = "aeiou";
        set<char> set;
        for(char a: temp)
        {
            set.insert(a);
        }
        int l =0;
        int res = 0;
        int counter = 0;
        for(int r = 0; r < s.size(); r++)
        {
           if(set.count(s[r]) == 1)
           counter++;
           if(r - l + 1 > k)
           {
             if(set.count(s[l]) == 1 )
             {
                counter--;
               
             }
             l++;
           }
           res = max(res,counter);
           if(res == k)
           return res;
        }
        return res;
    }
};