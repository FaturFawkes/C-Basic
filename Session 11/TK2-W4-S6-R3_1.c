#include<stdio.h>

int main() {
    int hour;
    double hourly = 10000;
    double total_price, discount = 0;

    // Input from user
    printf("Masukkan durasi pemakaian (dalam jam) : ");
    scanf("%d", &hour);

    // Count total price before discount
    total_price = hour * hourly;

    // Determine discount based on duration
    if (hour > 8) {
        discount = 0.25;
    } else if (hour > 6) {
        discount = 0.15;
    } else if (hour > 4) {
        discount = 0.10;
    }

    // Count total price after discount
    total_price -= (total_price * discount);

    // Print Result
    printf("Total harga yang harus dibayarkan adalah: Rp. %.f \n", total_price);

    return 0;
}