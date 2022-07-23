#include <stdio.h>

#define A_WEIGHT 3.5
#define B_WEIGHT 7.5
#define WEIGHT_SUM (A_WEIGHT + B_WEIGHT)

int main() {
    double A, B;
    scanf("%lf%lf", &A, &B);

    double AVG = (A * A_WEIGHT + B * B_WEIGHT) / WEIGHT_SUM;
    printf("MEDIA = %.5f\n", AVG);

    return 0;
}
