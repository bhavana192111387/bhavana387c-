#include<stdio.h>
int main()
{
    int maximum(int a[],int n);
    int max,i,n;
    int a[50];
    printf("enter n number:");
    scanf("%d",&n);
    printf("enter the number:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    max=maximum(a,n);
    printf("the largest number is %d",max);
}
int maximum(int a[],int n)
{
    int i,m=0;
    for(i=0;i<n;i++)
{
    if(a[i]>m)
    m=a[i];
}
return m;
}
