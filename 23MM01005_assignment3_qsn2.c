#include<stdio.h>
int main()
{
    printf("Enter three numbers\n");
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b && a>=c)
        printf("Largest integer is %d",a);
    else if(b>c)
        printf("Largest integer is %d",b);
    else 
        printf("Largest integer is %d",c);    
    return 0;
}