class Solution {
public:
    string removeDuplicates(string s) {
        std::string str = "";

        int i = 0;
        while (i < s.length())
        {
            if (str.length() && str.back() == s[i])
            {
                str.pop_back();
            }
            else
            {
                str.push_back(s[i]);
            }
            i++;
        }
        return str;
    }
};