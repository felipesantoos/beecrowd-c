#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main() {
    double R;
    scanf("%lf", &R);

    double A = PI * pow(R, 2);
    printf("A=%.4f\n", A);

    return 0;
}
