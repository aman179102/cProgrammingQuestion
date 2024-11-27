#include <stdio.h>

int main() {
    char marital_status;
    char sex;
    int age;

    // Input marital status, sex, and age
    printf("Enter marital status (M for married, U for unmarried): ");
    scanf(" %c", &marital_status);
    printf("Enter sex (M for male, F for female): ");
    scanf(" %c", &sex);
    printf("Enter age: ");
    scanf("%d", &age);

    // Checking insurance eligibility
    if (marital_status == 'M') {
        printf("The driver is insured.\n");
    } else if (marital_status == 'U') {
        if ((sex == 'M' && age > 30) || (sex == 'F' && age > 25)) {
            printf("The driver is insured.\n");
        } else {
            printf("The driver is not insured.\n");
        }
    } else {
        printf("Invalid input.\n");
    }

    return 0;
}
