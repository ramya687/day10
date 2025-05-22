#include <stdio.h>
int main() {
    int c = 6;
    int *p;
    p = &c;
printf("%p, %p\n", (void*)p, (void*)&c);
float x = 6.9;
float *t = &x;
return 0;
}
