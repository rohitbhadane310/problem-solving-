// 1254. Number of Closed Islands

// class Solution {
// public:

//     bool dfs(vector<vector<int>>& grid , vector<vector<bool>>&vis , int i , int j)
//     {
//         int r = grid.size(); int c = grid[0].size();

//         if(i < 0 || i >= r || j < 0 || j >= c)
//         {
//             return 0;
//         }

//         if(grid[i][j] == 1 || vis[i][j])
//         {
//             return 1;
//         }

//         vis[i][j] = true;
//         bool up = dfs(grid , vis , i-1 , j);
//         bool down = dfs(grid , vis , i+1 , j);
//         bool left = dfs(grid , vis  , i , j-1);
//         bool right = dfs(grid , vis , i , j+1);
//         return up & down & left & right;
//     }

//     int closedIsland(vector<vector<int>>& grid) {
        
//         int r = grid.size(); int c = grid[0].size();
//         int ans = 0;

//         vector<vector<bool>>vis(r , vector<bool>(c , false));

//         for(int i = 1; i < r-1; i++)
//         {
//             for(int j = 1; j < c-1; j++)
//             {
//                 if(grid[i][j] == 0 && !vis[i][j])
//                 {
//                     ans += dfs(grid , vis , i , j);
//                 }
//             }
//         }

//         return ans;
//     }
// };