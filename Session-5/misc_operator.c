#include <stdio.h>

int main() {
    // Data karyawan
    char *names[] = {"Alice", "Bob", "Charlie"};
    int ages[] = {30, 40, 25};
    int yearsWorked[] = {5, 10, 1};
    float salaries[] = {50000.0, 60000.0, 40000.0};

    // Menggunakan sizeof untuk menghitung jumlah karyawan
    int numEmployees = sizeof(ages) / sizeof(ages[0]); // Operator sizeof(ages[0]) di sini mengembalikan ukuran dari elemen pertama array ages, yaitu ukuran dari satu int.
    printf("Jumlah karyawan: %d\n", numEmployees);

    // Menggunakan pointer untuk mengakses dan memodifikasi data karyawan
    for (int i = 0; i < numEmployees; i++) {
        // Operator ternary untuk menentukan apakah karyawan berhak mendapatkan bonus
        char *bonusEligibility = (yearsWorked[i] >= 5) ? "Ya" : "Tidak";
        printf("Nama: %s, Usia: %d, Tahun Bekerja: %d, Gaji: %.2f, Berhak Bonus: %s\n",
               names[i], ages[i], yearsWorked[i], salaries[i], bonusEligibility);
    }

    // Menggunakan sizeof untuk menghitung ukuran array ages
    printf("Ukuran array ages: %lu bytes\n", sizeof(ages));

    return 0;
}
