#include<stdio.h>
#include<math.h>
int main()
{
    int n,digits=0;
    printf("Enter a number ");
    scanf("%d",&n);
    int m = n*n;
    int temp=m;
    while(temp>0)
    {
        digits++;
        temp/=10;
    }
    int part1=0,part2=0;
    if(digits%2!=0)
        digits++;
    double power;    
    for(int i=0;i<(digits/2);i++)
    {
        power=pow(10,i);
        part1+=((m%10)*power);
        m/=10;
    }
    part2=m;
    int sum=part1+part2;
    if(part1!=0 && part2!=0 && n==sum)
        printf("%d is a kaprekar number ",n);
    else
        printf("%d is not a kaprekar number ",n);
    return 0;
}    