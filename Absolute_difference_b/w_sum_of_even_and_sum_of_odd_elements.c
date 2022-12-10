#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,su=0,sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            su=su+a[i];
        }
        else
        {
            sum=sum+a[i];
        }
    }
    int d,c;
    if(su>sum)
    {
        d=su-sum;
        printf("%d",d);
    }
    else
    {
        c=sum-su;
        printf("%d",c);
    }
}