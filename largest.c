#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 numbers:\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c)
     printf("\n%d is the greatest of the three numbers.",a);
    else if(b>a&&b>c)
     printf("\n%d is the greatest of the three numbers.", b);
    else
     printf("\n%d is the greatest of the three numbers.", c);
    return 0 ;     
}