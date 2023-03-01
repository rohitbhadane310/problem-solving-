// 912. Sort an Array

// class Solution {
// public:

//     void merge(vector<int>&nums , int left , int mid , int right)
//     {
//         vector<int>temp(right - left + 1);
        
//         int i = left , j = mid +1 , k = 0;

//         while(i <= mid && j <= right)
//         {
//             if(nums[i] <= nums[j])
//             {
//                 temp[k++] = nums[i++];
//             }
//             else
//             {
//                 temp[k++] = nums[j++];
//             }
//         }

//         while(i <= mid)
//         {
//             temp[k++] = nums[i++];
//         }

//         while(j <= right)
//         {
//             temp[k++] = nums[j++];
//         }

//         for(int p = 0; p < k; p++)
//         {
//             nums[left + p] = temp[p];
//         }
//     }

//     void merge_sort(vector<int>&nums , int left , int right)
//     {
//         if(left >= right)
//         {
//             return;
//         }

//         int mid = (left + right) / 2;
//         merge_sort(nums , left , mid);
//         merge_sort(nums , mid +1 , right);
//         merge(nums , left , mid , right);
//     }

//     vector<int> sortArray(vector<int>& nums) {
        
//         merge_sort(nums , 0 , nums.size() - 1);

//         return nums;
//     }
// };


//-------------------------------------------------------------------------------------------------------------

// 26. Remove Duplicates from Sorted Array

// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
        
//       set<int>st;

//       for(int i = 0; i < nums.size(); i++)
//       {
//           st.insert(nums[i]);
//       }

//       int k = st.size();
//       int j = 0;

//       for(auto it: st)
//       {
//           nums[j++] = it;
//       }

//       return k;
//     }
// };



// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
        
//       int k = 1;

//       for(int i = 1; i < nums.size(); i++)
//       {
//           if(nums[i-1] != nums[i])
//           {
//               nums[k] = nums[i];
//               k++;
//           }
//       }
      
//       return k;

//     }
// };

//-------------------------------------------------------------------------------------------------------------

// 485. Max Consecutive Ones

// class Solution {
// public:
//     int findMaxConsecutiveOnes(vector<int>& nums) {
        
//         int count = 0;
//         int ans = 0;

//         for(int i = 0; i < nums.size(); i++)
//         {
//             if(nums[i] == 0)
//             {
//                 ans = max(ans , count);
//                 count = 0;
//             }
//             else
//             {
//                 count++;
//             }
//         }

//         ans = max(ans , count);

//         return ans;
//     }
// };