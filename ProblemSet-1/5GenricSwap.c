#include<stdio.h>

void generic_swap(void *a, void *b, size_t size)
{
    char temp;
    char *a1=(char*)a;
    char *b1=(char*)b;
  for(int i=0; i<size; i++)
 {
     temp = a1[i];
     a1[i]= b1[i];
     b1[i] = temp; 
 }
}


int main()
{
    int a= 10, b= 20;
    char c='A', d='B';
    float e=1.5f, f=2.5f;
    int a1[2] = {1,2}, a2[2]={3,4};

    generic_swap(&a,&b,sizeof(a));
    printf("%d %d\n",a,b);

    generic_swap(&c,&d,sizeof(c));
    printf("%c %c\n",c,d);

    generic_swap(&e,&f,sizeof(e));
    printf("%f %f\n",e,f);

    generic_swap(a1,a2,sizeof(a1));
    
    for(int i=0; i<2; i++)
    {
        printf("%d\n",a1[i]);
        printf("%d\n",a2[i]);
    }
    
}