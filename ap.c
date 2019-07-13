#include<stdio.h>
void main()
{
    int n,a,d,tn;
    scanf("%d %d %d",&n,&a,&d);
    tn=(n*((2*a)+((n-1)*d)))/2;
    printf("%d",tn);
}
