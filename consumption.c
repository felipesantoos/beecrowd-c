#include <stdio.h>

int main() {
    int kms;
    double liters;

    scanf("%d%lf", &kms, &liters);

    double consumption = kms / liters;

    printf("%.3f km/l\n", consumption);

    return 0;
}
