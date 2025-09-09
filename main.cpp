#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int val) : data(val), next(nullptr) {}
};

bool hasCycle(Node *head)
{
    unordered_set<Node *> visited;
    Node *current = head;
    while (current != nullptr)
    {
        if (visited.count(current))
            return true;
        visited.insert(current);
        current = current->next;
    }
    return false;
}
bool hasCycle2(Node *head)
{
    unordered_set<Node *> visited;
    Node *current = head;
    while (current != nullptr)
    {
        if (visited.count(current))
            return true;
        visited.insert(current);
        current = current->next;
    }
    return false;
}

int main()
{
    Node *head = new Node(1);
    head->next = new Node(4);
    head->next->next = new Node(6);
    head->next->next->next = new Node(12);
    head->next->next->next->next = new Node(987);
    head->next->next->next->next->next = new Node(343);

    // Create cycle: 343 -> 4
    head->next->next->next->next->next->next = head->next;

    cout << (hasCycle2(head) ? "Cycle detected" : "No cycle") << endl;

    return 0;
}
