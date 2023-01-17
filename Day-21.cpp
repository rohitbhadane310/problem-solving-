// 926. Flip String to Monotone Increasing

// class Solution {
// public:
//     int minFlipsMonoIncr(string s) {
        
//         int countOfZero = 0 ,  countOfOne = 0;

//         for(auto i: s)
//         {
//             if(i == '1')
//             {
//                 countOfOne++;
//             }
//             else
//             {
//                 countOfZero++;
//                 countOfZero = min (countOfOne , countOfZero);
//             }
//         }

//         return countOfZero;
//     }
// };