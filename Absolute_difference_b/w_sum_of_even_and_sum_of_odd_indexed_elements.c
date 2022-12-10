#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,es=0,os=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            es=es+a[i];
        }
        else
        {
            os=os+a[i];
        }
    }
    int d=es-os;
    printf("%d",d);
}