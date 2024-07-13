#include <stdio.h>

// Mendefinisikan union untuk menyimpan berbagai tipe data dengan satu alamat memori saja yaitu Data
union Data {
    int integer;
    float decimal;
    char character;
};

int main() {
    // Mendeklarasikan variabel union
    union Data data;

    // Menyimpan dan menampilkan nilai integer
    data.integer = 10;
    printf("Integer: %d\n", data.integer);

    // Menyimpan dan menampilkan nilai float
    data.decimal = 15.5;
    printf("Decimal: %.2f\n", data.decimal);

    // Menyimpan dan menampilkan nilai character
    data.character = 'A';
    printf("Character: %c\n", data.character);

    // Menampilkan semua nilai setelah mengubah
    printf("\nSetelah mengubah nilai:\n");
    printf("Integer: %d\n", data.integer);
    printf("Decimal: %.2f\n", data.decimal);
    printf("Character: %c\n", data.character);

    return 0;
}
