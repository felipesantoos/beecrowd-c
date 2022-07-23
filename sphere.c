#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main() {
    double R;
    scanf("%lf", &R);

    double volume = (4.0 / 3.0) * PI * pow(R, 3);

    printf("VOLUME = %.3f\n", volume);

    return 0;
}
