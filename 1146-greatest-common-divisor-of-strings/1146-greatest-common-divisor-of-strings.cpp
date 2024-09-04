#include<vector>
class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
    //     string common = "";
    //    int n =  str1.length();
    //    int m = str2.length();
    //    if(n == m)
    //    {
    //     return common;
    //    } 
    //    vector<int> freq(26,0);
    //    for(int i =0; i<n; i++)
    //    {
    //      int idx = str1[i] - 'A';
    //      freq[idx]++;
    //    }
    //    for(int i =0; i<m; i++)
    //    {
    //      int idx = str2[i] - 'A';
    //      freq[idx]--;
    //    }
      
    //    for(int i =0; i<26; i++)
    //    { string str = "";
    //     if(freq[i] > 0){
    //      str =  i + 'A';
    //     }
    //     common += str;
    //    }
    //    return common;

    // }
        return (str1 + str2 == str2 + str1)? 
        str1.substr(0, gcd(size(str1),size(str2))): "";
    }
};