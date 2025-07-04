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

void insertAtTail(Node *&head, int val)
{
    // creating node
    Node *newNode = new Node(val);
    // if node have one value;
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    // getting to the last element
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    // right now tmp node is in  last node
    // add the node in tail
    tmp->next = newNode;
}

void printLinkList(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}
int main()
{
    Node *head = NULL;
    // Node *head = new Node(10);
    // Node *a = new Node(20);
    // Node *b = new Node(30);
    // head->next = a;
    // a->next = b;

    insertAtTail(head, 40);
    insertAtTail(head, 50);
    printLinkList(head);
    return 0;
}