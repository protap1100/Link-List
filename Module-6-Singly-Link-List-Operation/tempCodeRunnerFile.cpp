#include <bits/stdc++.h>
using namespace std;

void fun(int *p)
{
    cout << *p << endl;
}

int main()
{
    int x = 10;
    int *y = &x;
    cout << *y << endl;
    fun(y);
    return 0;
}