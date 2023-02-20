// 35. Search Insert Position


// class Solution {
// public:
//     int searchInsert(vector<int>& nums, int target) {
        
//         int n = nums.size();

//         for(int i = 0; i < nums.size(); i++)
//         {
//             if(nums[i] == target)
//             {
//                 return i;
//             }
//             else if(nums[i] > target)
//             {
//                 return i;
//             }
//         }

//         return n;
//     }
// };






// 21. Merge Two Sorted Lists

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
//     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        

//         if(list1 == NULL)
//         {
//             return list2;
//         }

//         if(list2 == NULL)
//         {
//             return list1;
//         }

//         ListNode *ptr = NULL;

//         if(list1->val > list2->val)
//         {
//             ptr = list2;
//             list2 = list2->next;
//         }
//         else
//         {
//             ptr = list1;
//             list1 = list1->next;
//         }

//         ListNode *curr = ptr;

//         while(list1 &&  list2)
//         {
//             if(list1->val > list2->val)
//             {
//                 curr->next = list2;
//                 list2 = list2->next;
//             }
//             else
//             {
//                 curr->next = list1;
//                 list1 = list1->next;
//             }

//             curr = curr->next;
//         }

//         if(list1 != NULL)
//         {
//             curr->next = list1;
//         }
        
//         if(list2 != NULL)
//         {
//             curr->next = list2;
//         }

//         return ptr;
//     }
// };