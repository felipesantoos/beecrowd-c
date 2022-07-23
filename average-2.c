#include <stdio.h>

#define A_WEIGHT 2
#define B_WEIGHT 3
#define C_WEIGHT 5
#define WEIGHT_SUM (A_WEIGHT + B_WEIGHT + C_WEIGHT)

int main() {
    double A, B, C;
    scanf("%lf%lf%lf", &A, &B, &C);

    double AVG = (A * A_WEIGHT + B * B_WEIGHT + C * C_WEIGHT) / WEIGHT_SUM;
    printf("MEDIA = %.1f\n", AVG);

    return 0;
}
