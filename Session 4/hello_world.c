#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, diskriminan, akar1, akar2;
    // Meminta pengguna untuk memasukkan koefisien persamaan kuadrat ax^2 + bx + c = 0
    printf("Masukkan koefisien a:"); scanf("%lf", &a);
    printf("Masukkan koefisien b:"); scanf("%lf", &b);
    printf("Masukkan koefisien c:"); scanf("%lf", &c);
    
    // Menghitung diskriminan dari persamaan kuadrat
    diskriminan = b * b - 4 * a * c;
    
    // Memeriksa jika diskriminan kurang dari nol yang berarti tidak ada akar nyata
    if (diskriminan < 0) {
        printf("Tidak ada akar nyata.\n");
    } else {
        // Menghitung dua akar nyata menggunakan rumus kuadrat
        akar1 = (-b + sqrt(diskriminan)) / (2 * a);
        akar2 = (-b - sqrt(diskriminan)) / (2 * a);
        printf("Akar-akarnya adalah: x1 = %lf dan x2 = %lf\n", akar1, akar2);
    }
    getchar(); // Menunggu tekanan tombol
    return 0;
}
