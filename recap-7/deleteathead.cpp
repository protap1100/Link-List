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
void insert_at_tail(Node *&head, Node *&tail, int val)
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
void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

void reverse_linked_list(Node *tmp)
{
    if (tmp == NULL)
    {
        return;
    }
    reverse_linked_list(tmp->next);
    cout << tmp->val << endl;
}

void delete_at_head(Node *&head)
{
    if (head == NULL)
        return;
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}

// Node *delete_at_tail(Node *&head, Node *&tail)
// {
//     if (head == NULL)
//         return NULL;
//     if (head->next == NULL)
//     {
//         delete tail;
//         head = NULL;
//         tail = NULL;
//         return head;
//     }
//     Node *tmp = head;
//     while (tmp->next != tail)
//     {
//         tmp = tmp->next;
//     }
//     delete tail;
//     tail = tmp;
//     tail->next = NULL;
//     return head;
// }

void delete_at_any_position(Node *&head, int idx)
{
    Node *tmp = head;
    for (int i = 0; i < idx; i++)
    {
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}

void delete_at_tail(Node *&head, Node *&tail, int idx)
{
    Node *tmp = head;
    for (int i = 0; i < idx; i++)
    {
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
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
            insert_at_tail(head, tail, val);
        }
    }
    cout << "tail code "<< tail->val << endl;
    delete_at_tail(head, tail, 4);
    print_linked_list(head);
    cout << "tail code " << tail->val << endl;
    return 0;
}