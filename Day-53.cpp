// 90. Subsets II

// class Solution {
// public:

//     void solve(int ind , vector<int>&nums , set<vector<int>>&st , vector<int>res){

//         if(ind == nums.size())
//         {
//             sort(res.begin() , res.end());
//             st.insert(res);
//             return;
//         }

//         res.push_back(nums[ind]);
//         solve(ind+1 , nums , st , res);

//         res.pop_back();

//         solve(ind+1 , nums , st , res);
//     }

//     vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
//         vector<vector<int>>ans;
//         set<vector<int>>st;
//         vector<int>res;

//         solve(0 , nums , st , res);

//         for(auto it = st.begin(); it != st.end(); it++)
//         {
//             ans.push_back( * it);
//         }

//         return ans;
//     }
// };









// class Solution {
// public:
     
//     void solve(int ind , vector<vector<int>>&ans , vector<int>ds , vector<int>arr , int tar)
//     {
//         if(ind == arr.size())
//         {
//             if(tar == 0)
//             {
//                 ans.push_back(ds);
//             }
//             return;
//         }

//         if(arr[ind] <= tar)
//         {
//             ds.push_back(arr[ind]);
//             solve(ind , ans , ds , arr , tar-arr[ind]);
//             ds.pop_back();
//         }

//         solve(ind+1 , ans , ds , arr , tar);
//     }

//     vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
//         vector<vector<int>>ans;
//         vector<int>ds;

//         solve(0 , ans , ds , candidates , target);

//         return ans;
//     }
// };