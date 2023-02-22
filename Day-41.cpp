// 1011. Capacity To Ship Packages Within D Days

// class Solution {
// public:
//     int shipWithinDays(vector<int>& weights, int days) {
        
//         int lo = *max_element(weights.begin(), weights.end());
//         int hi = accumulate(weights.begin(), weights.end(), 0);

//         while(lo < hi)
//         {
//             int mid = lo + (hi - lo) / 2;
//             int curr = 0 , need = 1;

//             for(auto it: weights)
//             {
//                 if(curr + it > mid)
//                 {
//                     curr  = 0;
//                     need++;
//                 }
//                 curr += it;
//             }

//             if(need <= days)
//             {
//                 hi = mid;
//             }
//             else
//             {
//                 lo = mid + 1;
//             }
//         }
//         return lo;
//     }
// };