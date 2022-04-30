#include <stdio.h>
#include <string.h>
int digitalRoot(char * n) {
   int digitsSum = 0;
   for (int i = 0; i < strlen(n); i++) {
      digitsSum += n[i] - '0';
   }
   if (digitsSum == 0) {
      return 0;
   }
   return digitsSum % 9 == 0 ? 9 : digitsSum % 9;
}
int main() {
   char *n = "7895";
   printf("%d\n", digitalRoot(n));
   return 0;
}
