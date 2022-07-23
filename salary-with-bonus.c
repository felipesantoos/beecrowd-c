#include <stdio.h>

int main() {
    char sellerName[50];
    double fixedSalary, saleTotal;

    scanf("%s%lf%lf", sellerName, &fixedSalary, &saleTotal);

    double finalSalary = fixedSalary + ((15 * saleTotal) / 100);
    
    printf("TOTAL = R$ %.2f\n", finalSalary);

    return 0;
}
