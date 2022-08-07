#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector <char> e;
        int count = 0;
        int max_count = 0;
        int j=0;
        for(int i=0; i< s.length();i++)
        {
            if(e.empty())
           { 
                e.push_back(s[i]);
                count++;
            }
            else if(std::count(e.begin(), e.end(), s[i]))
            {
                if(count>max_count)
                    max_count = count;
                count=0;
                e.clear();
                i = j++;
            }
            else
            {
                e.push_back(s[i]);
                count++;
            }
        }
        return max_count;
    }
};

int main()
{
    Solution obj;
    string s;
    cin>>s;
    cout<<obj.lengthOfLongestSubstring(s);
    return 0;
}