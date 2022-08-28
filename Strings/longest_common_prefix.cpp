/* Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "". */

class Solution {
public:
    int min_str_len(vector<string>& a)
    {
        int min = a[0].length();
        for(int i=0; i<a.size();i++)
        {
            if(min > a[i].length())
                min = a[i].length(); 
        }
        return min;
    }
    
    string longestCommonPrefix(vector<string>& strs)
    {
        string ans = "";
        char prefix = '\0';
        int min_str = min_str_len(strs);
        
        for(int i =0;i<min_str;i++)
        {
            prefix = strs[0][i];
            for(int j = 1; j< strs.size();j++)
            {
                if(prefix != strs[j][i])
                    return ans;
            }
            ans = ans+prefix;
        }
        return ans;
    }
};