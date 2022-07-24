#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main() {
    double A, B, C;

    scanf("%lf%lf%lf", &A, &B, &C);

    double rectangledTriangleArea = (A * C) / 2;
    double circleArea = PI * pow(C, 2);
    double trapeziumArea = ((A + B) * C) / 2;
    double squareArea = pow(B, 2);
    double rectangleArea = A * B;

    printf("TRIANGULO: %.3f\n", rectangledTriangleArea);
    printf("CIRCULO: %.3f\n", circleArea);
    printf("TRAPEZIO: %.3f\n", trapeziumArea);
    printf("QUADRADO: %.3f\n", squareArea);
    printf("RETANGULO: %.3f\n", rectangleArea);

    return 0;
}
