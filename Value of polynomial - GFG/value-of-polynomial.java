//{ Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;

class GFG{
    public static void main(String args[])throws IOException
    {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        long t = Long.parseLong(in.readLine());
        while(t-- > 0){
            long n = Long.parseLong(in.readLine());
            String a[] = in.readLine().trim().split("\\s+");
            long poly[] = new long[(int)n];
            for(int i = 0;i < n;i++)
                poly[i] = Long.parseLong(a[i]);
            long x = Long.parseLong(in.readLine());
            
            Solution ob = new Solution();
            System.out.println(ob.value(n, poly, x));
        }
    }
}
// } Driver Code Ends


//User function Template for Java

class Solution{
    static int value(long n, long poly[], long x){
       long y = 0;
       long m = 1000000007;
       for(int i = 0; i < n; i++)
       {
           long b = ((x % m) * (y % m)) % m;
           y = ((poly[i] % m) + (b % m)) % m;
       }
       return (int) y;
    }
}