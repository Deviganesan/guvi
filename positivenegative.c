#include <stdio.h>

int main()
{
    int a;
    printf("enter the value");
    scanf("%d",&a);
    if(a>=1)
    {
        printf("positive");
        
    }
    else if(a<1)
    {
        printf("negative ");
        
    }
    else
    printf(" zero");
    return 0;
}
