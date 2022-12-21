#include<stdio.h>
int main()
{
    int n,r,q,sum=0,product=1;
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
       r=q%10;
       q=q/10;
    sum=sum+r;
    product=product*r;
    }
    if(sum==product)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}