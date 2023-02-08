// 904. Fruit Into Baskets

//     class Solution
// {
// public:
//     int totalFruit(vector<int> &fruits)
//     {

//         int n = fruits.size();

//         unordered_map<int, int> map;

//         int j = 0, i = 0, ans = 0;

//         while (j < n)
//         {
//             map[fruits[j]]++;

//             if (map.size() <= 2)
//             {
//                 int temp = 0;

//                 for (auto it : map)
//                 {
//                     temp += it.second;
//                 }

//                 ans = max(temp, ans);
//             }
//             else
//             {
//                 map[fruits[i]]--;

//                 if (map[fruits[i]] == 0)
//                 {
//                     map.erase(fruits[i]);
//                 }

//                 i++;
//             }

//             j++;
//         }

//         return ans;
//     }
// };