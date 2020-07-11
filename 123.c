#include<stdio.h>
void main()
{
int a,i,sum=0;
scanf("%d",&a);
while((a/10)!=0)
{
    a=a%10;
    sum=sum+a;
}
printf("the sum is%d",sum);
}
