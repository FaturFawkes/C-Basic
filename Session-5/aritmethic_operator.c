#include <stdio.h>

int main() {
    int item1 = 20; // price of item1
    int item2 = 30; // price of item2
    int quantity1 = 2;
    int quantity2 = 1;
    int totalCost;

    totalCost = (item1 * quantity1) + (item2 * quantity2); // Total cost calculation

    printf("Total cost: %d\n", totalCost); // Output: Total cost: 70
    return 0;
}
