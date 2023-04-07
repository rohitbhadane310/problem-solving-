// 1020. Number of Enclaves


// class Solution {
// public:

//     bool dfs(vector<vector<int>>& grid , vector<vector<bool>>&vis , int i , int j , int &count)
//     {
//         int r = grid.size(); int c = grid[0].size();

//         if(i < 0 || i >= r || j < 0 || j >= c)
//         {
//             return 0;
//         }

//         if(grid[i][j] == 0 || vis[i][j])
//         {
//             return 1;
//         }

//         vis[i][j] = true;
//         count++;

//         bool up = dfs(grid , vis , i-1 , j , count);
//         bool down = dfs(grid , vis , i+1 , j , count);
//         bool left = dfs(grid , vis , i , j-1 , count);
//         bool right = dfs(grid , vis , i , j+1 , count);

//         return up & down & left & right;
//     }

//     int numEnclaves(vector<vector<int>>& grid) {
        
//         int r = grid.size(); int c = grid[0].size();
//         int ans = 0;

//         vector<vector<bool>>vis(r , vector<bool>(c , false));

//         for(int i = 1; i < r-1; i++)
//         {
//             for(int j = 1; j < c-1; j++)
//             {
//                 if(grid[i][j] == 1 && !vis[i][j])
//                 {
//                     int count = 0;
//                     if(dfs(grid , vis , i , j , count))
//                     {
//                         ans += count;
//                     }
//                 }
//             }
//         }

//         return ans;
//     }
// };