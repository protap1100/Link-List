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
void findDifBetweenMaxMin(Node *head)
{
    int min = head->val;
    int max = head->val;
    Node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->val < min)
            min = tmp->val;
        if (tmp->val > max)
            max = tmp->val;
        tmp = tmp->next;
    }
    cout << (max - min) << endl;
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
            insertAtTail(head, val, tail);
        }
    }
    findDifBetweenMaxMin(head);
    return 0;
}