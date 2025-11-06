#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *inputFile = fopen("lorem.txt", "r");
    FILE *outputFile = fopen("output.txt", "w");

    if (inputFile == NULL || outputFile == NULL) {
    printf("Cannot find file\n");
    return 1;
    }

    char x;
    while (fscanf(inputFile, "%c", &x) == 1) {
        if (islower(x)) {
            ch = toupper(x);
        }
        fprintf(outputFile, "%c", x);
    }

    fclose(inputFile);
    
    fclose(outputFile);

    printf("Convertion is successful.\n");
    
    
    
    
    return 0;
}

