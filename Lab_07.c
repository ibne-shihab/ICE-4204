#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char ch;

    // --------- Simulate ClassNotFound by trying to open a non-existent file ---------
    file = fopen("non_existing_class.txt", "r");
    if (file == NULL) {
        printf("ClassNotFound simulation: File 'non_existing_class.txt' not found.\n");
    } else {
        fclose(file);
    }

    // --------- EOFException Simulation ---------
    file = fopen("input_Lab07.txt", "r");

    if (file == NULL) {
        printf("EOFException simulation: 'input.txt' file not found. Create this file to test EOF.\n");
    } else {
        printf("Reading characters until EOF:\n");

        while ((ch = fgetc(file)) != EOF) {
            putchar(ch);
        }

        printf("\nReached end of file (EOF).\n");
        fclose(file);
    }

    return 0;
}
