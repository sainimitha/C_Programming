#include <stdio.h>
#include <math.h>
int main() {
    double a, b, c, r1, r2, real, imag, numenator;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    numenator = b * b - 4 * a * c;
    if (numenator > 0) {
        r1 = (-b + sqrt(numenator)) / (2 * a);
        r2 = (-b - sqrt(numenator)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf", r1, r2);
    }
    else if (numenator == 0) {
        r1 = r2 = -b / (2 * a);
        printf("r1 = r2 = %.2lf;", r1);
    }
    else {
        real = -b / (2 * a);
        imag = sqrt(-numenator) / (2 * a);
        printf("r1 = %.2lf+%.2lfi and r2 = %.2f-%.2fi", real, imag, real, imag);
    }

    return 0;
} 