/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *dummyNode = new ListNode(-1);
        ListNode *curr = dummyNode;
        ListNode *n1 = l1;
        ListNode *n2 = l2;
        int carry = 0;
        while (n1 != nullptr || n2 != nullptr)
        {
            int sum = carry;

            if (n1)
                sum = sum + n1->val;
            if (n2)
                sum = sum + n2->val;

            ListNode *dummyNode = new ListNode(sum % 10);
            carry = sum / 10;
            curr->next = dummyNode;
            curr = curr->next;

            if (n1)
                n1 = n1->next;
            if (n2)
                n2 = n2->next;
        }
        if (carry)
        {
            ListNode *dummyNode = new ListNode(carry);
            curr->next = dummyNode;
        }
        return dummyNode->next;
    }
};