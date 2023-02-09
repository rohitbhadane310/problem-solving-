// 2306. Naming a Company

// class Solution {
// public:
//     long long distinctNames(vector<string>& ideas) {
        
//         unordered_map<string , int>map;

//         for(auto it: ideas)
//         {
//             map[it]++;
//         }

//         vector<vector<int>>dp(26 , vector<int>(26 , 0));

//         for(int i = 0; i < ideas.size(); i++)
//         {
//             string curr = ideas[i];
//             char ch1 = curr[0];
            
//             for(int j = 0; j < 26; j++)
//             {
//                 char ch2 = j + 'a';
//                 curr[0] = ch2;

//                 if(map.find(curr) == map.end())
//                 {
//                     dp[ch1 - 'a'][j]++;
//                 }
//             }
//         }

//         long long ans = 0;

//         for(int i = 0; i < 26; i++)
//         {
//             for(int j = 0; j< 26; j++)
//             {
//                 ans += dp[i][j] * dp[j][i];
//             }
//         }

//         return ans;
//     }
// };