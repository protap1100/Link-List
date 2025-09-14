#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
int main()
{
    // creating node
    Node a(10), b(20), c(30), d(40);
    // connection;
    a.next = &b;
    b.next = &c;
    c.next = &d;
    return 0;
}