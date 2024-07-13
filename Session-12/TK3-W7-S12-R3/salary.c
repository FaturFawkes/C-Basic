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
            return;
        }
        printf("\nKetik 0 untuk kembali\n");
        scanf("%d", &menu);
    }

    return 0;
}

struct Employee createEmployee() {
    struct Employee employee;

    printf("NIP: ");
    scanf("%d", &employee.nip);
    
    printf("Nama: ");
    scanf("%49s", employee.name);
    
    printf("Alamat: ");
    scanf("%299s", employee.address);
    
    printf("No HP: ");
    scanf("%14s", employee.phone_number);
    
    printf("Jabatan: ");
    scanf("%49s", employee.position);
    
    printf("Golongan: ");
    scanf("%2s", employee.golongan);

    if (strcmp(employee.golongan, "D1")) {
        employee.salary = 2500000;
    } else if (strcmp(employee.golongan, "D2")) {
        employee.salary = 2000000;
    } else if (strcmp(employee.golongan, "D3")) {
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

    printf("NIP: ");
    scanf("%d", &emp.nip);

    printf("Golongan: ");
    scanf("%s", emp.golongan);

    printf("Jam Lembur: ");
    scanf("%d", &overtime_hours);


    for (int i = 0; i < num_employees; i++) {
        if (emp.nip == employee[i].nip) {
            emp = employee[i];
            if (strcmp(employee[i].golongan, "D1")) {
                emp.overtime_fee = 1000;
            } else if (strcmp(employee[i].golongan, "D2")) {
                emp.overtime_fee = 5000;
            } else if (strcmp(employee[i].golongan, "D3")) {
                emp.overtime_fee = 2500;
            }
        } else {
            return 1;
        }
    }

    int total_salary = emp.salary + (emp.overtime_fee * overtime_hours);

    printf("Total Gaji Bulan Ini : Rp.%d", total_salary);
    return 0;
}
