#include <stdio.h>
int main()
{
    for (int i = 0; i <= 54; i += 9)
    {
        if (i % 2 == 0)
            printf("%d,", i);
        else
            printf("%d,", -i);
    }
    return 0;
}