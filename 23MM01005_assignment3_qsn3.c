#include<stdio.h>
int main()
{
    printf("Enter three numbers\n");
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>=c && a+c>=b && b+c>=a)
        printf("They form sides of triangle ");
    else    
        printf("They do not form sides of triangle");    
    return 0;
}