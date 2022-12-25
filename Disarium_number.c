#include<stdio.h>
#include<math.h>
int main()
{
    int n,d,r,s=0,q;
    scanf("%d",&n);
    d=log10(n)+1;
    q=n;
    while(q!=0)
    {
        r=q%10;
       // n=n/10;
        s=s+pow(r,d);
        d--;
        q=q/10;
    }
    if(n==s)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}