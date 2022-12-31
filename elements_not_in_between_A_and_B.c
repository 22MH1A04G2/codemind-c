#include<stdio.h>
int main()
{
    int n,p,q,c;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d%d",&p,&q);
    for(i=0;i<n;i++)
    {
        if(a[i]<p &&a[i]<q || a[i]>p && a[i]>q)
        {
            printf("%d ",a[i]);
            c=1;
        }
    }
    if(c==0)
    {
        printf("-1");
    }
}