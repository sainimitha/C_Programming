#include <stdio.h>
int gcd(int n1,int n2){
    int GCD;
    for(int i=1;i<=n1 && i<=n2;++i){
        if(n1%i==0 && n2%i==0){
            GCD= i;
        }
    }
    printf("GCD: %d\n",GCD);
}

int main(){
    int n1,n2;
    printf("First number: ");
    scanf("%d",&n1);
    printf("Secound number: ");
    scanf("%d",&n2);
    gcd(n1,n2);
    return 0;
}