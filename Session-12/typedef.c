#include <stdio.h>

// Mendefinisikan tipe baru untuk struct menggunakan typedef
typedef struct {
    int id;
    char *name[50];
} Student;

int main() {
    // Mendeklarasikan variabel bertipe Student
    Student student1;

    // Mengisi data student
    student1.id = 1;
    // snprintf(student1.name, sizeof(student1.name), "Alice");

    // Menampilkan data student
    printf("ID: %d\n", student1.id);
    printf("Name: %s\n", student1.name);

    return 0;
}
