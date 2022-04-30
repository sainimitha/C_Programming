#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char str[100],camelcase[100];
    int flag=0,i=0,j=0;
    printf("Enter a sentence\n");
    scanf("%c", str);
    printf("Original String = %s\n",str);
    while(str[i]!='\0')
    {
        if(str[i]==' ' && str[i]== '_')
        {
           camelcase[j]=toupper(str[i]);
        }
       
    }
    printf("Camel Case = %s",camelcase);
    return 0;
}