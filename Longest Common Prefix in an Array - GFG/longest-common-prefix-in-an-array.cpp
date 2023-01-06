//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        int shortestWordIndex = 0;
        for(int i = 1; i < N; i++) {
            if(arr[i].length() > arr[shortestWordIndex].length())
                shortestWordIndex = i;
        }
        int r = 0;
        while(r < arr[shortestWordIndex].length())
        {
            int i = 0;
            while(i < N)
            {
                if(arr[i][r] == arr[shortestWordIndex][r])
                {
                    i++;
                }
                else {
                    break;
                }
            }
            if(i != N)
                break;
            else {r++;}
        }
        return r == 0 ? "-1" : arr[shortestWordIndex].substr(0, r);
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends