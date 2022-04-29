#include<stdio.h>
int main()
{
    int a,b,c,sum;
    printf("Enter the sides of Triangle");
    scanf("%d %d %d", &a, &b, &c);
    sum=a*a + b*b;
    if(a == b && b == c )
      {
          printf("Equilateral Triangle\n");
      }
    else if(a == b || b == c || c == a)
      {
          printf("Isosceles Triangle\n");
      }
    else if (sum == c*c)
      {
         printf("Right Angle Triangle\n");
      }
    else
      {
          printf("Scalene Triangle");
      }
}