#include <stdio.h>

int main() {
    FILE *fin, *fout;
    int a, b, caseNo = 1;

    // Open files
    fin = fopen("input_Lab08.txt", "r");
    fout = fopen("output_Lab08.txt", "w");

    if (fin == NULL) {
        printf("Error: Cannot open input_Lab08.txt\n");
        return 1;
    }

    if (fout == NULL) {
        printf("Error: Cannot create output_Lab08.txt\n");
        fclose(fin);
        return 1;
    }

    // Read pairs and write organized output
    while (fscanf(fin, "%d %d", &a, &b) == 2) {
        fprintf(fout, "Case-%d:\n", caseNo);
        fprintf(fout, "  Sum of %d and %d is %d\n", a, b, a + b);
        fprintf(fout, "  Difference of %d and %d is %d\n", a, b, a - b);
        fprintf(fout, "  Product of %d and %d is %d\n", a, b, a * b);
        if (b != 0)
            fprintf(fout, "  Division of %d by %d is %d\n", a, b, a / b);
        else
            fprintf(fout, "  Division of %d by %d is undefined (division by zero)\n", a, b);
        fprintf(fout, "\n");
        caseNo++;
    }

    printf("Processing complete. Check output_Lab08.txt\n");

    fclose(fin);
    fclose(fout);
    return 0;
}
