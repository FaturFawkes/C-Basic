#include<stdio.h>

int main() {
    int count_student;
    int score_quiz, score_assignment, score_absence, score_practice, score_exam;
    int i;

    printf("Input Jumlah Mahasiswa: ");
    scanf("%d", &count_student);
    
    if (count_student < 10) {
        printf("Minimal input adalah 10 mahasiswa\n");
    } else {
        for (i = 0; i < count_student; i++) {
            char grade;
            double overall_average;
            printf("Masukkan nilai Quiz Mahasiswa ke-%d: ", i+1);
            scanf("%d", &score_quiz);

            printf("Masukkan nilai Assignment Mahasiswa ke-%d: ", i+1);
            scanf("%d", &score_assignment);

            printf("Masukkan nilai Absensi Mahasiswa ke-%d: ", i+1);
            scanf("%d", &score_absence);

            printf("Masukkan nilai Praktek Mahasiswa ke-%d:  ", i+1);
            scanf("%d", &score_practice);

            printf("Masukkan nilai UAS Mahasiswa ke-%d: ", i+1);
            scanf("%d", &score_exam);

            // Count average for each student
            overall_average = (score_quiz + score_assignment + score_absence + score_practice + score_exam) / 5.0;

            // Check grade for each student 
            if (overall_average <= 55) {
                grade = 'E';
            } else if (overall_average <= 65) {
                grade = 'D';
            } else if (overall_average <= 75) {
                grade = 'C';
            } else if (overall_average <= 85) {
                grade = 'B';
            } else {
                grade = 'A';
            }

            printf("Mahasiswa ke-%d:\nRata-rata : %.2f \nGrade %c - ", i + 1, overall_average, grade);
            if (grade == 'D' || grade == 'E') {
                printf("Tidak Lulus\n");
            } else {
                printf("Lulus\n");
            }
        };
    }
    
    return 0;
}