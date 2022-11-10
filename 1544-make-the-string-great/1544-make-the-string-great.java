/*1544. Make the string great
Given a string s of lower and upper case English letters.

A good string is a string which doesn't have two adjacent characters s[i] and s[i + 1] where:

0 <= i <= s.length - 2
s[i] is a lower-case letter and s[i + 1] is the same letter but in upper-case or vice-versa.
To make the string good, you can choose two adjacent characters that make the string bad and remove them. You can keep doing this until the string becomes good.

Return the string after making it good. The answer is guaranteed to be unique under the given constraints.

Notice that an empty string is also good.
*/

// One trick: Whenever you feel like stuck on a problem in which you are working with characters and need some kind of range, check out ascii valus of characters. 

class Solution {
    public String makeGood(String s) {
         StringBuilder str = new StringBuilder();
         int i = 0;
     
        while (i < s.length()) {
            if (str.length() != 0 && Math.abs(str.charAt(str.length() - 1) - s.charAt(i)) == 32)                {
                str = str.deleteCharAt(str.length() - 1);
             } else {
                str.append(s.charAt(i));
             }
             i++;
        }
        return str.toString();
    }
}
