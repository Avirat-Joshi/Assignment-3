#include<stdio.h>
int main()
{
    int days,fine;
    printf("Enter nnumber of days late to return the book ");
    scanf("%d",&days);
    if(days<=5)
        fine=1*days;
    if(days>5 && days<=10)    
        fine=(days-5)*2 + 5; 
    if(days>10 && days<=30)
        fine= (days-10)*5 + 15;
    if(days>30)
    {
        fine= (days-10)*5 + 15;
        printf("Your membership is cancelled and ");    
    }
    printf("Fine of Rs.%d is to be paid",fine);
    return 0;
}