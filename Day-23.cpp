// 953. Verifying an Alien Dictionary

// class Solution {
// public:
//     bool isAlienSorted(vector<string>& words, string order) {
        
//         unordered_map<char , int>map;

//         for(int i = 0; i < order.size(); i++)
//         {
//             map[order[i]] = i;
//         }

//         for(int i = 0; i < words.size()-1; i++)
//         {
//             string w1 = words[i];
//             string w2 = words[i+1];

//             int n = min(w1.size() , w2.size());

//             for(int j = 0; j < n; j++)
//             {
//                 if(map[w1[j]] < map[w2[j]])
//                 {
//                     break;
//                 }
//                 if(map[w1[j]] > map[w2[j]])
//                 {
//                     return false;
//                 }
//                 if(j == n-1 && w1.size() > w2.size())
//                 {
//                     return false;
//                 }
//             }
//         }

//         return true;
//     }
// };