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
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
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
void deleteAtHead(Node *&head)
{
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}
// void deleteAtTail(Node *&tail)
// {
//     Node *deleteNode = tail;
//     tail = tail->next;
//     delete deleteNode;
// }

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        else
        {
            insertAtTail(head, val, tail);
        }
    }
    deleteAtHead(head);
    printLinkList(head);
    return 0;
}