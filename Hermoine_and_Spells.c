#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c && b>c)
    {
        printf("%d",a+b);
    }
    else if(a>b && a>c && b<c)
    {
        printf("%d",a+c);
    }
    else if(a<b && b>c && a>c)
    {
        printf("%d",a+b);
    }
    else if(a<b && b>c && a<c)
    {
        printf("%d",b+c);
    }
   else if(c>b && a<c && b>a)
    {
        printf("%d",c+b);
    }
    else
    {
        printf("%d",c+a);
    }
}