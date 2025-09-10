#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int val) : val(val), next(nullptr) {}
};

ListNode *deleteMiddle(ListNode *head)
{
    if (head == NULL)
    {
        return NULL; // case 1: empty list
    }
    if (head->next == NULL)
    {
        return NULL; // case 2: only one node → delete it
    }

    ListNode *slow = head; // slow moves 1 step at a time
    ListNode *fast = head; // fast moves 2 steps at a time
    ListNode *pre = NULL;  // keeps track of node before slow

    while (fast != NULL)
    {
        fast = fast->next; // fast moves one step
        if (fast != NULL)
        {                      // if fast can move again
            fast = fast->next; // fast moves second step
            pre = slow;        // pre follows slow
            slow = slow->next; // slow moves one step
        }
    }

    // Now, slow points to the middle node
    // pre points to the node before middle
    pre->next = slow->next; // unlink middle node
    return head;            // return updated head
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
    cout << deleteMiddle(head);

    return 0;
}
