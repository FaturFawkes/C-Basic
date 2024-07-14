#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 100

struct Employee {
    int nip;
    char name[50];
    char address[300];
    char phone_number[15]; // Simpan nomor telepon sebagai string
    int salary;
    char position[50];
    char golongan[3];
    int overtime_fee;
};

struct Employee createEmployee();
int countSalary(struct Employee employee[], int num_employees);

int main() {
    int menu;
    int program = 1;
    int num_employees = 0;
    struct Employee employees[MAX_EMPLOYEES];

    while (program > 0 ) {
        printf("\n\n===== Program Hitung Gaji Karyawan ======\n\n");
        printf("Silahkan pilih menu dibawah ini\n1.Tambah Karyawan\n2.Hitung Gaji Karyawan\n3.Exit\nPilih Menu : ");
        scanf("%d", &menu);

        if (menu == 1) {
            employees[num_employees++] = createEmployee();
        } else if (menu == 2) {
            int error = countSalary(employees, num_employees);
            if (error == 1) {
                printf("\nKaryawan tidak ditemukan\n");
            }
        } else {
            program = 0;
        }
    }

    return 0;
}

struct Employee createEmployee() {
    struct Employee employee;

    printf("NIP: ");
    scanf("%d", &employee.nip);
    getchar(); // Mengkonsumsi newline character setelah scanf

    printf("Nama: ");
    fgets(employee.name, sizeof(employee.name), stdin);
    employee.name[strcspn(employee.name, "\n")] = '\0'; // Menghapus newline character

    printf("Alamat: ");
    fgets(employee.address, sizeof(employee.address), stdin);
    employee.address[strcspn(employee.address, "\n")] = '\0'; // Menghapus newline character

    printf("No HP: ");
    fgets(employee.phone_number, sizeof(employee.phone_number), stdin);
    employee.phone_number[strcspn(employee.phone_number, "\n")] = '\0'; // Menghapus newline character

    printf("Jabatan: ");
    fgets(employee.position, sizeof(employee.position), stdin);
    employee.position[strcspn(employee.position, "\n")] = '\0'; // Menghapus newline character

    printf("Golongan: ");
    fgets(employee.golongan, sizeof(employee.golongan), stdin);
    employee.golongan[strcspn(employee.golongan, "\n")] = '\0'; // Menghapus newline character

    if (strcmp(employee.golongan, "D1") == 0) {
        employee.salary = 2500000;
    } else if (strcmp(employee.golongan, "D2") == 0) {
        employee.salary = 2000000;
    } else if (strcmp(employee.golongan, "D3") == 0) {
        employee.salary = 1500000;
    } else {
        employee.salary = 0;
    }

    printf("\n==== Berhasil Menambahkan Karyawan ====\n");
    return employee;
}

int countSalary(struct Employee employee[], int num_employees) {
    struct Employee emp;
    int overtime_hours;
    int found = 0;

    printf("NIP: ");
    scanf("%d", &emp.nip);
    getchar(); // Mengkonsumsi newline character setelah scanf

    printf("Golongan: ");
    fgets(emp.golongan, sizeof(emp.golongan), stdin);
    emp.golongan[strcspn(emp.golongan, "\n")] = '\0'; // Menghapus newline character

    printf("Jam Lembur: ");
    scanf("%d", &overtime_hours);

    for (int i = 0; i < num_employees; i++) {
        if (emp.nip == employee[i].nip) {
            emp = employee[i];
            found = 1;
            if (strcmp(employee[i].golongan, "D1") == 0) {
                emp.overtime_fee = 10000;
            } else if (strcmp(employee[i].golongan, "D2") == 0) {
                emp.overtime_fee = 5000;
            } else if (strcmp(employee[i].golongan, "D3") == 0) {
                emp.overtime_fee = 2500;
            } else {
                emp.overtime_fee = 0;
            }
            break; // keluar loop setelah menemukan karyawan
        }
    }

    if (!found) {
        return 1;
    }

    int total_salary = emp.salary + (emp.overtime_fee * overtime_hours);

    printf("Total Gaji Bulan Ini : Rp.%d\n", total_salary);
    return 0;
}
