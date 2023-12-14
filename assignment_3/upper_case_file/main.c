#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *inputFile, *outputFile;
    char inputFilename[] = "input.txt"; // Replace with your input file name
    char outputFilename[] = "output.txt"; // Replace with your output file name
    char ch;

    // Open the input file for reading
    inputFile = fopen(inputFilename, "r");
    if (inputFile == NULL) {
        printf("Error opening input file %s.\n", inputFilename);
        return 1;
    }

    // Open the output file for writing
    outputFile = fopen(outputFilename, "w");
    if (outputFile == NULL) {
        printf("Error opening output file %s.\n", outputFilename);
        fclose(inputFile);
        return 1;
    }

    // Read each character from the input file, convert to uppercase, and write to the output file
    while ((ch = fgetc(inputFile)) != EOF) {
        // Convert to uppercase using the toupper function
        char upperCaseChar = toupper(ch);
        // Write the uppercase character to the output file
        fputc(upperCaseChar, outputFile);
    }

    // Close the files
    fclose(inputFile);
    fclose(outputFile);

    printf("File conversion successful.\n");

    return 0;
}
