#include <stdio.h>

int main() {
    int age = 65;
    int seniorCitizenAge = 60;
    int isEligible;

    isEligible = (age >= seniorCitizenAge);

    if (isEligible) {
        printf("User is eligible for a senior citizen discount.\n");
    } else {
        printf("User is not eligible for a senior citizen discount.\n");
    }

    return 0;
}
