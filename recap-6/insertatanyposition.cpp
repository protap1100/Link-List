#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next = NULL;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_any_pos(Node *head, int position, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i < position; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}
void print_linked_list(Node *head)
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
    Node *b = new Node(35);
    head->next = a;
    a->next = b;
    int newVal = 40;
    insert_at_any_pos(head, 2, 25);
    insert_at_any_pos(head, 2, 30);
    print_linked_list(head);
    return 0;
}