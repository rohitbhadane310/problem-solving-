// 567. Permutation in String

// class Solution {
// public:
//     bool checkInclusion(string s1, string s2) {
        
//         int n1 = s1.size();
//         int n2 = s2.size();

//         sort(s1.begin() , s1.end());

//         for(int i = 0; i < n2 - n1 + 1; i++)
//         {
//             string str = s2.substr(i , n1);

//             sort(str.begin() , str.end());

//             if(str == s1)
//             {
//                 return true;
//             }
//         }

//         return false;
//     }
// };