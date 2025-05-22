#include <stdio.h>
int main()
{
    int a,sum=0;
    scanf("%d",&a);
    for(int i=1;i<a;i++){
        if(a%i==0){
            printf("%d ",i);
            sum=sum+i;
        }
    }
    if(sum==a)
    printf("true");
    else 
    printf("false");
    return 0;
}