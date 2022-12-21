#include<stdio.h>
int main()
{
    int n,q,r,product=1,sum=0,d;
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
        r=q%10;
        q=q/10;
        product=product*r;
        sum=sum+r;
    }
    d=product-sum;
    printf("%d",d);
}