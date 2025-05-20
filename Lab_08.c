#include <stdio.h>

int main() {
    FILE *fin, *fout;
    int a, b, caseNo = 1;

    // Open files
    fin = fopen("input_Lab08.txt", "r");
    fout = fopen("output_Lab08.txt", "w");

    if (fin == NULL) {
        printf("Error: Cannot open input.txt\n");
        return 1;
    }

    if (fout == NULL) {
        printf("Error: Cannot create output.txt\n");
        fclose(fin);
        return 1;
    }

    // Read pairs from input file and process
    while (fscanf(fin, "%d %d", &a, &b) == 2) {
        int sum = a + b;
        int diff = a - b;
        int prod = a * b;
        int div = (b != 0) ? (a / b) : 0; // avoid division by 0

        fprintf(fout, "Case-%d: %d %d %d %d\n", caseNo, sum, diff, prod, div);
        caseNo++;
    }

    printf("Processing complete. Check output.txt\n");

    fclose(fin);
    fclose(fout);
    return 0;
}
