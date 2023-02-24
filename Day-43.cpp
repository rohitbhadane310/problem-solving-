// 2. Add Two Numbers

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
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
//         ListNode *l3 = new ListNode(0);
//         ListNode *temp = l3;
//         int carry = 0;

//         while(l1 && l2)
//         {
//             int value = l1->val + l2->val + carry;

//             carry = value / 10;
//             temp->next = new ListNode(value % 10);

//             temp = temp->next;
//             l1 = l1->next;
//             l2 = l2->next;
//         }

//         while(l1)
//         {
//             int value = l1->val + carry;

//             carry = value / 10;
//             temp->next = new ListNode(value % 10);

//             temp = temp->next;
//             l1 = l1->next;
//         }

//         while(l2)
//         {
//             int value = l2->val + carry;

//             carry = value / 10;
//             temp->next = new ListNode(value % 10);

//             temp = temp->next;
//             l2 = l2->next;
//         }

//         if(carry != 0)
//         {
//             temp->next = new ListNode(carry);
//         }

//         return l3->next;
//     }
// };



// 237. Delete Node in a Linked List

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
//     void deleteNode(ListNode* node) {
        
//         ListNode *temp = node->next;
//         node->val = temp->val;

//         node->next = node->next->next;
//     }
// };


// 160. Intersection of Two Linked Lists

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
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        

//         while(headA)
//         {
//             ListNode *temp = headB;

//             while(temp)
//             {
//                 if(headA == temp)
//                 {
//                     return headA;
//                 }

//                 temp = temp->next;
//             }

//             headA = headA->next;
//         }

//         return NULL;
//     }
// };

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
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

//         unordered_set<ListNode *>st;
//         ListNode *temp = headA;

//         while(temp)
//         {
//             st.insert(temp);
//             temp = temp ->next;
//         }

//         while(headB)
//         {
//             if(st.find(headB) != st.end())
//             {
//                 return headB;
//             }

//             headB = headB->next;
//         }
        
//         return NULL;
//     }
// };

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
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
//         if(!headA || !headB) return NULL;

//         ListNode *temp1 = headA;
//         ListNode *temp2 = headB;

//         while(temp1 != temp2)
//         {
//             if(temp1 == NULL)
//             {
//                 temp1 = headB;
//             }
//             else
//             {
//                 temp1 = temp1->next;
//             }

//             if(temp2 == NULL)
//             {
//                 temp2 = headA;
//             }
//             else
//             {
//                 temp2 = temp2->next;
//             }
//         }

//         return temp1;
//     }
// };



// 141. Linked List Cycle


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
//     bool hasCycle(ListNode *head) {
        
//         unordered_set<ListNode *>st;
//         if(head == NULL)
//         {
//             return false;
//         }

//         ListNode *temp = head;

//         while(temp)
//         {
//             if(st.find(temp) != st.end())
//             {
//                 return true;
//             }
//             else
//             {
//                 st.insert(temp);
//             }

//             temp = temp->next;
//         }

//         return false;
//     }
// };