
// 45. Jump Game II

// class Solution {
// public:
//     int jump(vector<int>& nums) {
        
//         int n = nums.size();
//         int jump = 0;
//         int current = 0;
//         int farthest = 0;

//         for(int i = 0; i < n-1; i++)
//         {
//             farthest = max(farthest , nums[i] + i);

//             if(current == i)
//             {
//                 current = farthest;
//                 jump++;
//             } 
//         }

//         return jump;
//     }
// };