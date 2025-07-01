#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int val;
    node *next;
};

int main()
{
    node a, b, c, d;
    a.val = 10;
    b.val = 20;
    c.val = 30;
    d.val = 40;

    a.next = &a;
    b.next = &b;
    c.next = &c;
    d.next = &d;

    cout << b.next;

    return 0;
}