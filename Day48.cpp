// 2444. Count Subarrays With Fixed Bounds


// class Solution {
// public:
//     long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        
//         long long count = 0;
//         int minB = -1 , maxB = -1 , badB = -1;

//         for(int i = 0; i < nums.size(); i++)
//         {
//             if(nums[i] < minK || nums[i] > maxK)
//             {
//                 badB = i;
//             }

//             if(nums[i] == minK)
//             {
//                 minB = i;
//             }

//             if(nums[i] == maxK)
//             {
//                 maxB = i;
//             }

//             count += max(0 , min(minB , maxB) - badB);
//         }

//         return count;
//     }
// };