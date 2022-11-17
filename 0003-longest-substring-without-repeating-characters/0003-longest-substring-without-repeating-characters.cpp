class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //if string is empty return 0
        if (s.length() == 0) return 0;
        int l = 0;
        int r = 0;
        int ans = 0;
        // a hash map to check if a char has already been visited
        std::unordered_map<char, bool> is_present;
        while(r < s.length())
        {
            // while s[r] is in the map, remove left chars
            while(is_present[s[r]])
            {
                is_present[s[l]] = false;
                l++;
            }
            is_present[s[r]] = true;
            r++;
            ans = std::max(ans, r - l + 1);  
        }
        //subtract 1 because upon exiting the while loop r runs out of string bound
        return ans - 1;
    }
};