#include <stdio.h>

int main() {
    int employeeNumber, workedHoursNumber;
    float amountPerHour;
    scanf("%d%d%f", &employeeNumber, &workedHoursNumber, &amountPerHour);

    float salary = workedHoursNumber * amountPerHour;
    printf("NUMBER = %d\n", employeeNumber);
    printf("SALARY = U$ %.2f\n", salary);

    return 0;
}
