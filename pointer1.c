#include <stdio.h>
int main() 
{
    int a = 7;
    int *p, *q;
    p = &a;
    q = p;
    *q = 1;
printf("%d", a);
}

