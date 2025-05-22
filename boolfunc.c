#include <stdio.h>
#include <stdbool.h>
int perfect(int x)
{
    int sum=0;
    for(int i=1;i<x;i++)
    {
        if(x%i==0){
            sum=sum+i;
        }
    }
    return sum==x;
}
int main()
{
    int x;
    scanf("%d",&x);
    bool a=perfect(a);
    printf("%s ",a?"true":"false");
    if(a)
    printf("true");
    else
    printf("false");
    return 0;
}