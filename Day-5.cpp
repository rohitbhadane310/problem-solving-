// Given a string s, sort it in decreasing order based on the frequency of the characters. The frequency of a character is the number of times it appears in the string.

// Return the sorted string. If there are multiple answers, return any of them.

// Example 1:

// Input: s = "tree"
// Output: "eert"
// Explanation: 'e' appears twice while 'r' and 't' both appear once.
// So 'e' must appear before both 'r' and 't'. Therefore "eetr" is also a valid answer.

// Example 2:

// Input: s = "cccaaa"
// Output: "aaaccc"
// Explanation: Both 'c' and 'a' appear three times, so both "cccaaa" and "aaaccc" are valid answers.
// Note that "cacaca" is incorrect, as the same characters must be together.


// class Solution {
// public:

//     bool static cmp(pair<char , int>&a , pair<char , int>&b){
//         return a.second > b.second;
//     }
//     string frequencySort(string s) {

//         unordered_map<char , int>map;
//         for(int i = 0; i < s.size(); i++){
//             map[s[i]]++;
//         }

//         vector<pair<char , int>>vec;
//         for(auto x: map){
//             vec.push_back({x.first , x.second});
//         }

//         string ans;
//         sort(vec.begin() , vec.end() , cmp);
//         for(auto y: vec){
//             for(int i = 0; i < y.second; i++){
//                 ans += y.first;
//             }
//         }
//         return ans;
//     }
// };