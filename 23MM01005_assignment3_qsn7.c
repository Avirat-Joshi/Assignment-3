#include <stdio.h>
int main()
{
    int m, n, k;
    printf("Enter number of marks obtained out of 100 \n");
    scanf("%d", &m);
    if (m < 0 || m > 100)
    {
        printf("Error! Marks should be in range 0 to 100");
        return 0;
    }
    printf("Enter number of classes attended \n");
    scanf("%d", &n);
    printf("Enter number of classes conducted \n");
    scanf("%d", &k);
    if (n > k)
    {
        printf("Number of classes attended cannot be greater than number of classes conducted");
        return 0;
    }
    double w;
    w = n / k;
    double t;
    t = m * n / k;
    printf("Final score= %.0f \n", t);
    if (t >= 90)
        printf("Grade= Ex");
    if (t < 90 && t >= 80)
        printf("Grade= A");
    if (t < 80 && t >= 70)
        printf("Grade= B");
    if (t < 70 && t >= 60)
        printf("Grade= C");
    if (t < 60 && t >= 50)
        printf("Grade= D");
    if (t < 50 && t >= 40)
        printf("Grade= P");
    if (t < 40)
        printf("Grade= F");
    return 0;
}