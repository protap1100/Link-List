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

void insertAtTail(Node *&head, int val, Node *&tail)
{
    // creating node
    Node *newNode = new Node(val);
    // if node have one value;
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    // getting to the last element
    tail->next = newNode;
    tail = newNode;
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
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    head->next = a;
    a->next = tail;

    insertAtTail(head, 40, tail);
    insertAtTail(head, 50, tail);
    printLinkList(head);

    cout << "Tail" << tail->val << endl;
    return 0;
}