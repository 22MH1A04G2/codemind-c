#include<stdio.h>
int main()
{
    int a,b,max,i;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        max=a;
    }
    else
    {
        max=b;
    }
    for(i=max;i>=max;i++)
    {
        if(i%a==0 && i%b==0)
        {
            printf("%d",i);
            break;
        }
    }
}