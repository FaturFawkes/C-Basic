#include <stdio.h>

int main() {
    int age = 20;
    int isCitizen = 1; // 1 for true, 0 for false

    if (age >= 18 && isCitizen) {
        printf("User is eligible to vote.\n");
    } else {
        printf("User is not eligible to vote.\n");
    }

    return 0;
}
