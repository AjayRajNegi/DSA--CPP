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
    if (!head || !head->next)
        return nullptr;

    int n = 0;
    ListNode *temp = head;
    while (temp)
    {
        n++;
        temp = temp->next;
    }

    if (n == 1)
        return nullptr;
    if (n == 2)
    {
        head->next = nullptr;
        return head;
    }
    else
    {

        temp = head;
        for (int i = 0; i < (n / 2) - 1; i++)
        {
            temp = temp->next;
        }

        ListNode *current = temp->next;
        temp->next = temp->next->next;
        delete current;
    }

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
    cout << deleteMiddle(head);

    return 0;
}
