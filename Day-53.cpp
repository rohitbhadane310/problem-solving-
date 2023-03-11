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