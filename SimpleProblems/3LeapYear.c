#include<stdio.h>
int main()
{
    int yr;
    printf("Enter Year\n");
    scanf("%d",&yr);
    if((((yr % 4 == 0) && (yr % 100 != 0)) || (yr % 400 == 0)))
    {
        printf("LEAP YEAR");
    }
    else
    {
       printf("NOT LEAP YEAR");
    }
    return 0;
}