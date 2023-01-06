//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    std::vector<std::string> split(std::string _str, char _split_char)
    {
        std::vector<std::string> returnString;
        int offset = 0;
        while (_str.find(_split_char, offset) != std::string::npos)
        {
            returnString.push_back(_str.substr(offset, _str.find(_split_char, offset) - offset));
            offset = _str.find(_split_char, offset) + 1;
        }
        returnString.push_back(_str.substr(offset, _str.length() - offset));
        return returnString;
    }
    string reverseWords(string S) 
    { 
        std::vector<std::string> str = split(S, '.');
        std::string ans = "";
        for(int i = str.size() - 1; i >= 0; i--)
        {
            ans.append(str[i] + ".");
        }
        ans.pop_back();
        return ans;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends