// 6. Zigzag Conversion

// class Solution {
// public:
//     string convert(string s, int numRows) {
        
        
//         if(numRows == 1) return s;

//         string res = "";

//         int jum = (numRows-1) * 2;
//         for(int i = 0; i < numRows; i++)
//         {
//             for(int j = i; j < s.size(); j+= jum)
//             {
//                 res += s[j];

//                 if(i > 0 && i < numRows-1 &&(j + jum-2 *  i) < s.size())
//                 {
//                     res += s[j + jum - 2 * i];
//                 }
//             }
//         }

//         return res;
//     }
// };