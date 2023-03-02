// 443. String Compression


// class Solution {
// public:
//     int compress(vector<char>& chars) {
        
//         int count = 1;
//         string ans;

//         for(int i = 1; i <= chars.size(); i++)
//         {
//             if(i < chars.size() && chars[i] == chars[i-1])
//             {
//                 count++;
//             }
//             else
//             {
//                 if(count == 1)
//                 {
//                     ans.push_back(chars[i-1]);
//                 }
//                 else
//                 {
//                     ans.push_back(chars[i-1]);
//                     string val = to_string(count);
//                     for(auto it: val)
//                     {
//                         ans.push_back((char)it);
//                     }
//                     count = 1;
//                 }
//             }
//         }

//         for(int i = 0; i < ans.size(); i++)
//         {
//             chars[i] = ans[i];
//         }

//         return ans.size();
//     }
// };


// class Solution {
// public:
//     int compress(vector<char>& chars) {
        
//         if(chars.size() == 1)
//         {
//             return 1;
//         }

//         int j = 0 , count = 1;

//         for(int i = 1; i <= chars.size(); i++)
//         {
//             count = 1;
//             while(i < chars.size() && chars[i] == chars[i-1])
//             {
//                 count++;
//                 i++;
//             }
//             chars[j++] = chars[i-1];
//             if(count > 1)
//             {
//                 string c = to_string(count);
//                 for(auto ch: c)
//                 {
//                     chars[j++] = (char)ch;
//                 }
//             }
//         }

//         return j;
//     }
// };