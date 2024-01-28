#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    if(n>0)
        printf("Positive number");
    else if(n<0)
        printf("Negative number");
    else
        printf("Number is zero");
    return 0;
}