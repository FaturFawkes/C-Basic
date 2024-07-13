#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, n;
    char * buffer;

    printf("Masukkan panjang string: ");
    scanf("%d", &n);

    buffer = (char *)malloc(n * sizeof(char));
    if (buffer == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        buffer[i] = 'a' + rand() % 26;
    }
    buffer[n] = '\0';

    printf("Random string: %s\n", buffer);

    free(buffer);
    return 0;
}

