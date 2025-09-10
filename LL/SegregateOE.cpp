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
    if (!head)
        return nullptr;

    vector<int> oddValues;
    vector<int> evenValues;

    ListNode *temp = head;
    int index = 1;

    while (temp)
    {
        if (index % 2 == 1)
            oddValues.push_back(temp->val);
        else
            evenValues.push_back(temp->val);

        temp = temp->next;
        index++;
    }

    temp = head;
    int i = 0, j = 0;

    while (i < (int)oddValues.size())
    {
        temp->val = oddValues[i++];
        temp = temp->next;
    }
    while (j < (int)evenValues.size())
    {
        temp->val = evenValues[j++];
        temp = temp->next;
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
    cout << segregateOddEven(head);

    return 0;
}
