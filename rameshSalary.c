#include <stdio.h>

int main()
{
    float basicSalary, dearnessAllowance, houseRentAllowance, grossSalary;
    printf("Enter Ramesh's basic salary\n");
    scanf("%f", &basicSalary);
    dearnessAllowance = 0.4 * basicSalary;
    houseRentAllowance = 0.2 * basicSalary;
    grossSalary = basicSalary + dearnessAllowance + houseRentAllowance;
    printf("Ramesh's gross salary is = %.2f\n", grossSalary);
    return 0;
}
