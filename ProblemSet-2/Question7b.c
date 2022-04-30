#include<stdio.h>
int leftrotate(int *a,int n,int k)
{ 
    int i,j,temp;
    for(i=0; i<k; i++)
    {
        temp=a[0];
        for(j=0; j<n-1; j++)
        {
           a[j]=a[j+1];
		}
 
         a[n-1]=temp;
    }      
 }

void print(int *a,int n)
{ 
   
    int i;
    for(i=0; i<n; i++)
    {
       printf("%d \n",a[i]);
    }
    
       
 }
 
int main()
{
    int a[100],i,n,j,k,temp;
   
    printf("Enter size of the  array : ");
    scanf("%d", &n);
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("How many times left rotate : ");
    scanf("%d", &k);
     
    leftrotate(a,n,k);
   
    printf("\narray elements after left rotate  : ");
 
      print(a,n);
 
     
    
}    