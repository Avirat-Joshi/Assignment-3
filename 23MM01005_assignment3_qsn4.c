#include<stdio.h>
int main()
{   
    int x1,y1,x2,y2,x3,y3;
    printf("Enter coordinates (x,y) of three points ");
    scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
    int area;
    area=x1*(y2-y3) - x2*(y1-y3) + x3*(y1-y2);
    if(area==0)
        printf("The points are collinear");
    else
        printf("The points are not collinear");    
    return 0;
}