#include <stdio.h>
#include <stdlib.h>

int main() {
    int A, B, C;

    scanf("%d%d%d", &A, &B, &C);

    int maior = (A + B + abs(A - B)) / 2;
    maior = (maior + C + abs(maior - C)) / 2;

    printf("%d eh maior\n", maior);

    return 0;
}
