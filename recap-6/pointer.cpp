#include <bits/stdc++.h>
using namespace std;
void fun(int *p){
    int y =200;
    p = &y;
    cout << "in fun :" << *p << endl;
}

int main()
{
    int a = 10;
    int *p = &a;
    fun(p);
    cout << "In main:" << &p << endl;
    return 0;
}