//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    vector<vector<int>> findAllPossiblePaths(int n, int m, vector<vector<int>> &grid)
    {
        std::vector<std::vector<int>> result;
        std::vector<int> path;
        findPaths(result, grid, path, 0, 0, n, m);
        std::reverse(result.begin(), result.end());
        return result;
    }
private:
    void findPaths(std::vector<std::vector<int>> &result, std::vector<std::vector<int>> &grid, std::vector<int> path, int row, int col, int n, int m)
    {
        if (row == n - 1 && col == m - 1)
        {
            path.push_back(grid[row][col]);
            result.push_back(path);
            return;
        }
    
        path.push_back(grid[row][col]);
        if (col + 1 < m)
        {
            findPaths(result, grid, path, row, col + 1, n, m);
        }
    
        if (row + 1 < n)
        {
            findPaths(result, grid, path, row + 1, col, n, m);
        }
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> grid[i][j];
            }
        }
        Solution ob;
        auto ans = ob.findAllPossiblePaths(n, m, grid);
        for (int i = 0; i < ans.size(); i++)
        {
            for (int j = 0; j < ans[i].size(); j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}

// } Driver Code Ends