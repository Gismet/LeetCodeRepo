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