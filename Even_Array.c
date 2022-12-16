#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,flag=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
}