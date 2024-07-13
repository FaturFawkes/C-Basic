#include <stdio.h>

int main(){
    // lib  <stdio.h>
	// putchar(a); // menampilkan hanya satu karakter ASCII https://theasciicode.com.ar/ascii-printable-characters/curly-brackets-braces-closing-ascii-code-125.html
    // puts(a); // menampilkan string dengan newline
    // printf("\n%s", a); //menampilkan string dengan format

    char str[100];

    // lib <stdio.h>
    // a = getchar(); // Menerima inputan berupa karakter ASCII
    // scanf("%s", a); // Menerima inputan berdasarkan format dan tipe data
    fgets(str, sizeof(100), stdin); // Menerima inputan string sesuai buffer 
    printf("%s", str);

    // https://stackoverflow.com/questions/1011455/is-it-possible-to-modify-a-string-of-char-in-c

	return 0;
}