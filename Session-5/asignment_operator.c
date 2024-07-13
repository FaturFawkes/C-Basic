#include <stdio.h>

int main() {
    int userPoints = 100;
    int purchasePoints = 50;

    userPoints += purchasePoints; // Add purchase points to user points

    printf("Updated user points: %d\n", userPoints); // Output: Updated user points: 150
    return 0;
}
