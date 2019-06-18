#include<stdio.h>
void main()
{
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
if(a<b<c)
    printf("%d",c);
 else if(a<b)
 printf("%d",b);
 else
 printf("%d",a);
}
