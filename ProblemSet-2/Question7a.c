#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void Isogram (char *s, int l)
{
    for(int i = 0 ; i<=l; i++)
    {
        for(int j = i+1 ; j<l ; j++)
        {
            if(s[i]==s[j] )
            {
               printf("NOT ISOGRAM\n");
               return ;
            }
        }
    }
    printf("ISOGRAM\n");
}


int main()
{
    char s[100]= "Nagendra";
    // printf("Enter string : ");
    // scanf("%c",s);
    int len = strlen(s);
    Isogram(s,len);

   
    return 0;
}