#include <bits/stdc++.h>
#include <vector>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int val) : val(val), next(nullptr) {}
};

ListNode *segregateOddEven(ListNode *head)
{
    if (head == NULL || head->next == NULL)
        return head;

    ListNode *odd = head;
    ListNode *even = head->next;
    ListNode *evenHead = even;

    while (even != NULL && even->next != NULL)
    {
        odd->next = even->next;
        odd = odd->next;

        even->next = odd->next;
        even = even->next;
    }
    odd->next = evenHead;
    return head;
}

int main()
{
    ListNode *head = new ListNode(1);
    head->next = new ListNode(4);
    head->next->next = new ListNode(6);
    head->next->next->next = new ListNode(12);
    head->next->next->next->next = new ListNode(987);
    head->next->next->next->next->next = new ListNode(343);

    // cout << (deleteMiddle(head) ? "Cycle detected" : "No cycle") << endl;
    cout << segregateOddEven(head);

    return 0;
}
