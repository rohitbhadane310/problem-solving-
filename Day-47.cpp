// 28. Find the Index of the First Occurrence in a String

// class Solution {
// public:
//     int strStr(string haystack, string needle) {
        
//         int ind = haystack.find(needle);

//         if(ind > -1)
//         {
//             return ind;
//         }
        
//         return -1;
//     }
// };


// class Solution {
// public:
//     int strStr(string haystack, string needle) {
        
//         int n1 = haystack.size();
//         int n2 = needle.size();

//         if(n2 > n1)
//         {
//             return -1;
//         }D

//         for(int i = 0;  i < n1-n2+1; i++)
//         {
//             if(haystack.substr(i , n2) == needle)
//             {
//                 return i;
//             }
//         }

//         return -1;
//     }
// };