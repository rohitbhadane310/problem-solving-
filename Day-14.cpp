// 520. Detect Capital

// We define the usage of capitals in a word to be right when one of the following cases holds:

// All letters in this word are capitals, like "USA".
// All letters in this word are not capitals, like "leetcode".
// Only the first letter in this word is capital, like "Google".
// Given a string word, return true if the usage of capitals in it is right.

 

// Example 1:

// Input: word = "USA"
// Output: true
// Example 2:

// Input: word = "FlaG"
// Output: false

// class Solution {
// public:
//     bool detectCapitalUse(string word) {

//         vector<char>ans;      // O(n) use the exstra space

//         for(int i = 0; i < word.size(); i++)
//         {
//             char ch = word[i];
//             ans.push_back(ch);
//         }

//         if(ans.size() == 1 || ans.size() == 0)
//         {
//             return true;
//         }

//         bool upper = false;
//         bool lower = false;

//         for(int i = 0; i < ans.size(); i++)
//         {
//             if(ans[i] >= 'A' && ans[i] <= 'Z')
//             {
//                 upper = true;
//             }
//             else
//             {
//                 upper = false;
//                 break;
//             }
//         }

//         if(upper || lower)
//         {
//             return true;
//         }

//         bool upperAll = false;
//         bool lowerAll = false;

//         for(int i = 1; i < ans.size(); i++)
//         {
//             if(ans[i] >= 'a' && ans[i] <= 'z')
//             {
//                 upperAll = true;
//             }
//             else
//             {
//                 upperAll = false;
//                 break;
//             }
//         }

//         if(upperAll || lowerAll)
//         {
//             return true;
//         }

//         return false;

//     }
// };