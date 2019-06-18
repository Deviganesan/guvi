#include<stdio.h>
void main()
{
int a,b,i,sum=0,array[10];
scanf("%d %d",&a,&b);

for(i=0;i<a;i++)
{
    scanf("%d",&array[i]);
}
    for(i=0;i<b;i++)
    {
        sum=sum+array[i];
    }

printf("%d",sum);


}
