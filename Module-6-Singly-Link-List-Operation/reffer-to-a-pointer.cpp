#include <bits/stdc++.h>
using namespace std;

void fun(int *&p)
{
    // // *p = 100;
    // int y = 200;
    // p = NULL;
    // cout << "In fun function :" << &p << endl;
    // p = &y;
    p = NULL;
}

int main()
{
    int x = 10;
    int *p = &x;
    fun(p);
    cout << "In Main function :" << *p << endl;
    return 0;
}