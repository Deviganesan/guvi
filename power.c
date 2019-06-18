#include<stdio.h>
#include<math.h>
void main()
{
int a,b,sum=1,i;
scanf("%d%d",&a,&b);
for(i=0;i<b;i++)
{
sum=sum*a;
}
printf("%d",sum);
}
