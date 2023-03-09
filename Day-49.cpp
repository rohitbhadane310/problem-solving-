// 1539. Kth Missing Positive Number


// class Solution {
// public:
//     int findKthPositive(vector<int>& arr, int k) {

//         int miss_num = 0;
//         int count = 0;

//         for(int i = 0; i < arr.size(); i++ , count++)
//         {
//             while(count != arr[i])
//             {
//                 if(miss_num == k)
//                 {
//                     return count;
//                 }

//                 count++;
//                 miss_num++;
//             }
//         }

//         while(miss_num != k)
//         {
//             count++;
//             miss_num++;
//         }

//         return count;
//     }
// };