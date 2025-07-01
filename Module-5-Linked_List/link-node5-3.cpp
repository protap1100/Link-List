#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int val;
    node *next;
    node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
int main()
{
    node a(10), b(20), c(30), d(40), e(NULL);
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;
    e.next = NULL;
    // cout << a.val << " " << b.val  << " " << c.val  << " " << a.next  << " " << b.next  << " " << c.next;
    cout << a.val << endl;
    // cout << (*a.next).val << endl;
    // cout << (*a.next).next->next->next << endl; extra practice
    // cout << (d.next);
    cout << c.next->val << endl;
    cout << c.next->next->val;

    return 0;
}