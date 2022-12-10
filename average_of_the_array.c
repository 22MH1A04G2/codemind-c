#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    float a[n],sum=0,average;
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
        average=sum/n;
    }
    printf("%0.2f",average);
}