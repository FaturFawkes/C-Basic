#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Pointer adalah salah satu fitur penting dalam bahasa pemrograman C. 
Pointer adalah variabel yang menyimpan alamat memori dari variabel lain. 
Ini memungkinkan pengelolaan memori secara lebih efisien dan memungkinkan manipulasi langsung data dalam memori.
*/

/*
malloc() -> digunakan untuk mengalokasikan memory dengan spesifik byte
ptr = (castType *)malloc(size)
ptr = (float *)malloc(100 * sizeof(float))

variable ptr diatas memiliki ukuran 400 byte karena float memiliki ukuran 4 byte dan dikali 100
*/

int main() {
    int numNames;
    printf("Enter the number of names: ");
    scanf("%d", &numNames);

    /*
        names memiliki pointer to pointer karena pada dasarnya variable names adalah names[] 
        yaitu array of character yang bertipe pointer

        dan disini memiliki beberapa nama yang berarti array of string
    */
    char **names = (char **)malloc(numNames * sizeof(char *));
    if (names == NULL) {
        printf("Memory allocation failed \n");
        return 1;
    }

    for (int i = 0; i < numNames; i++) {
        char temp[100];
        printf("Enter name %d ", i + 1);
        scanf("%s", temp); // tidak menggunakan pointer karena variable temp sudah bertipe array dan array adalah pointer

        names[i] = (char *)malloc((strlen(temp) + 1) * sizeof(char));
        if (names[i] == NULL) {
            printf("Memory allocation failed for name %d\n", i + 1);
            return 1;
        }
        strcpy(names[i], temp); // memasukkan nama yang diinput ke dalam array names
    }

    printf("\nList of names:\n");
    for (int i; i < numNames; i++) {
        printf("%d: %s\n", i + 1, names[i]);
    }

    free(names); // Membebaskan memori yang sebelumnya dialokasikan

    return 0;
}