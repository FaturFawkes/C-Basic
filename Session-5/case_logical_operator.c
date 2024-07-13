#include <stdio.h>

int main() {
    int hasCompletedBasicCourse;
    int age;
    int hasParentalConsent;

    // Contoh data pengguna
    hasCompletedBasicCourse = 1;
    age = 16;
    hasParentalConsent = 1;

    // Mengecek apakah pengguna bisa mendaftar ke kursus lanjutan
    if (hasCompletedBasicCourse && (age > 18 || hasParentalConsent)) {
        printf("Pengguna dapat mendaftar ke kursus lanjutan.\n");
    } else {
        printf("Pengguna tidak dapat mendaftar ke kursus lanjutan.\n");
    }

    return 0;
}
