#include <bits/stdc++.h>
using namespace std;

class Node
{
public:         // ✅ use lowercase 'public'
    int data;   // the data value
    Node *next; // the pointer to the next value

public: // ✅ second 'public' is fine, but optional
    // constructor with both data and next pointer
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

    // constructor with only data (next defaults to null)
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

int main()
{
    vector<int> arr = {2, 5, 8, 7};
    Node *y = new Node(arr[0]);

    cout << y << '\n';       // prints the memory address of the node
    cout << y->data << '\n'; // prints the data stored in the node
}
