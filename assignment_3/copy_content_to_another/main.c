#include <stdio.h>

int main() {
    FILE *sourceFile, *destinationFile;
    char sourceFilename[] = "source.txt"; // Replace with your source file name
    char destinationFilename[] = "destination.txt"; // Replace with your destination file name
    char ch;

    // Open the source file for reading
    sourceFile = fopen(sourceFilename, "r");
    if (sourceFile == NULL) {
        printf("Error opening source file %s.\n", sourceFilename);
        return 1;
    }

    // Open the destination file for reading and appending
    destinationFile = fopen(destinationFilename, "a");
    if (destinationFile == NULL) {
        printf("Error opening destination file %s.\n", destinationFilename);
        fclose(sourceFile);
        return 1;
    }

    // Move the file pointer to the end of the destination file
    fseek(destinationFile, 0, SEEK_END);

    // Read each character from the source file and write to the destination file
    while ((ch = fgetc(sourceFile)) != EOF) {
        // Write the character to the destination file
        fputc(ch, destinationFile);
    }

    // Close the files
    fclose(sourceFile);
    fclose(destinationFile);

    printf("File content appended successfully.\n");

    return 0;
}
