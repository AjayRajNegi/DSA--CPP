#include <bits/stdc++.h>
#include <vector>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int val) : val(val), next(nullptr) {}
};

ListNode *reverseLL(ListNode *head)
{
    ListNode *temp = head;

    if (!temp || !temp->next)
        return head;

    vector<int> arr;
    int cnt = 0;
    while (temp != nullptr)
    {
        arr.push_back(temp->val);
        temp = temp->next;
        cnt++;
    }

    temp = head;
    while (temp != nullptr)
    {
        temp->val = arr[cnt];
        temp = temp->next;
        cnt--;
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
    cout << reverseLL(head);

    return 0;
}
