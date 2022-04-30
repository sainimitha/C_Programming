#include <stdio.h>

int maxnumber(int n, int k)
{
    for (int j = 0; j < k; j++) {
        int ans = 0;
        int i = 1;
        while (n / i > 0) {

            int temp = (n / (i * 10))
                           * i
                       + (n % i);
            i *= 10;
            ans = maxnumber(ans, temp);
        }
        n = ans;
    }
    return n;
}
int main()
{
    int n = 5872;
    int k = 872;
    printf("%d\n",maxnumber(n, k));
    return 0;
}