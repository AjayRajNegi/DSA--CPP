class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        ListNode *prev = nullptr;
        while (head)
        {
            ListNode *temp = head->next;

            head->next = prev;
            prev = head;
            head = temp;
        }
        return prev;
    }
};