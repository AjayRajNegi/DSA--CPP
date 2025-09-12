#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        vector<int> values;

        // Collect values from list1
        while (list1)
        {
            values.push_back(list1->val);
            list1 = list1->next;
        }

        // Collect values from list2
        while (list2)
        {
            values.push_back(list2->val);
            list2 = list2->next;
        }

        // Sort all values (brute-force)
        sort(values.begin(), values.end());

        // Build new linked list from sorted values
        ListNode dummy;
        ListNode *tail = &dummy;

        for (int v : values)
        {
            tail->next = new ListNode(v);
            tail = tail->next;
        }

        return dummy.next;
    }
};

// Optimal
//  class Solution {
//  public:
//      ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//          ListNode* t1 = list1;
//          ListNode* t2 = list2;

//         ListNode* dummy = new ListNode(-1);
//         ListNode* temp = dummy;

//         while(t1 != NULL && t2 != NULL){
//             if(t1->val < t2->val){
//                 temp->next = t1;
//                 temp = t1;
//                 t1 = t1->next;
//             }
//             else{
//                 temp->next = t2;
//                 temp = t2;
//                 t2 = t2->next;
//             }
//         }

//         if(t1) temp->next = t1;
//         else temp->next = t2;

//         return dummy->next;
//     }
// };