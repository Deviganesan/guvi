#include<stdio.h>
void main()
{
	int n1,n2,n3,n4;
	scanf("%d %d",&n1,&n2);
	scanf("%d %d",&n3,&n4);
	n1=n1-n3;
	n2=n2-n4;
	printf("%d %d",abs(n1),abs(n2));
	}
