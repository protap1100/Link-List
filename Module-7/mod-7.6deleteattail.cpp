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

void delete_at_head(Node *&head)
{
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}
void insert_at_tail(Node *&head, int val, Node *&tail)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    tail->next = newNode;
    tail = newNode;
}

void printing_linked_list(Node *&head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}

void delete_at_tail_2(Node *&head, int idx)
{

    if (head == NULL)
    {
        return;
    }
    if (idx == 0)
    {
        delete_at_head(head);
        return;
    }
    Node *tmp = head;
    for (int i = 0; i < idx - 1; i++)
    {
        tmp = tmp->next;
    }
    if (tmp->next == NULL)
    {
        return;
    }
    Node *deleteNode = tmp->next;
    tmp->next = deleteNode->next;
    delete deleteNode;
}

void delete_at_tail(Node *&head, Node *&tail)
{
    if (head == NULL)
        return;
    if (head == tail)
    {
        delete head;
        head = NULL;
        tail = NULL;
        return;
    }
    Node *tmp = head;
    while (tmp->next != tail)
    {
        tmp = tmp->next;
    }
    delete tail;
    tmp->next = NULL;
    tail = tmp;
}

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
            insert_at_tail(head, val, tail);
        }
    }
    delete_at_tail(head, tail);
    delete_at_tail(head, tail);
    printing_linked_list(head);
    return 0;
}