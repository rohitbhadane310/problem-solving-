// 704. Binary Search

// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
        
//         int ind = -1 , n = nums.size();
//         int left = 0 , right = n-1;

//         while(left <= right)
//         {
//             int mid = (left + right) / 2;

//             if(nums[mid] == target)
//             {
//                 return mid;
//             }
//             else if(nums[mid] < target)
//             {
//                 left = mid + 1;
//             }
//             else
//             {
//                 right = mid - 1;
//             }
//         }

//         return ind;
//     }
// };