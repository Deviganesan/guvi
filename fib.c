#include<stdio.h>
void main()
{
    int a=0,b=1,r,n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        r=a+b;
        a=b;
        b=r;


    printf("%d ",a);
}
}
