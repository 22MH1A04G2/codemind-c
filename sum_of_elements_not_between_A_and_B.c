#include<stdio.h>
int main()
{
    int n,p,q;
    scanf("%d",&n);
    int a[n],i,sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d%d",&p,&q);
    for(i=0;i<n;i++)
    {
        if((a[i]<p) || (a[i]>q))
        {
            sum=sum+a[i];
        }
    }
    printf("%d",sum);
}