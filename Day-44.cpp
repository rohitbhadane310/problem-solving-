// 121. Best Time to Buy and Sell Stock

// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
        
//         int n = prices.size();
//         int maxProfit = 0 , minProfit = INT_MAX;

//         for(int i = 0; i < n; i++)
//         {
//             minProfit = min(minProfit , prices[i]);
//             maxProfit = max(maxProfit , prices[i] - minProfit);
//         }

//         return maxProfit;
//     }
// };


// 234. Palindrome Linked List

// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     bool isPalindrome(ListNode* head) {
        
//         vector<int>ans;

//         ListNode *temp = head;

//         while(temp)
//         {
//             ans.push_back(temp->val);
//             temp = temp->next;
//         }

//         int i = 0 , j = ans.size()-1;

//         while(i < j)
//         {
//             if(ans[i] != ans[j])
//             {
//                 return false;
//             }

//             i++;
//             j--;
//         }

//         return true;
//     }
// };


// 142. Linked List Cycle II

// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode(int x) : val(x), next(NULL) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode *detectCycle(ListNode *head) {
        
//         unordered_map<ListNode * , int>mp;

//         ListNode *temp = head;

//         while(temp)
//         {
//             if(mp.find(temp) != mp.end())
//             {
//                 return temp;
//             }
//             else
//             {
//                 mp[temp]++;
//             }

//             temp = temp->next;
//         }

//         return NULL;
//     }
// };