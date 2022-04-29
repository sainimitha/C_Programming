#include <stdio.h>
int main() 
{
    int a;        
    printf("Enter the number\n");
    scanf("%d",&a);    

    int count=0;        
    
    for(int i=2;i<a;i++)
    {  
      {
        if(a%i==0)
        count++;
      }
    }
    if(count!=0)           
    {
        printf("Not a prime number\n");
    }
    else
    {
        printf("Prime number\n");
    }
    
    return 0;
}