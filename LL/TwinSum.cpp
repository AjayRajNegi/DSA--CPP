class Solution
{
public:
    int pairSum(ListNode *head)
    {
        ListNode *fast = head;
        ListNode *slow = head;

        while (fast && fast->next)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        ListNode *nextNode, *prev = nullptr;
        while (slow)
        {

            nextNode = slow->next;
            slow->next = prev;
            prev = slow;
            slow = nextNode;
        }

        int twinSum = 0;
        while (prev)
        {
            twinSum = max(twinSum, head->val + prev->val);
            head = head->next;
            prev = prev->next;
        }
        return twinSum;
    }
};