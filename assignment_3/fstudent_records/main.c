#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILENAME "student_data.dat"

// Define a structure to store student information
struct Student {
    char name[50];
    int roll;
    float marks;
    char dob[15];
};

// Function prototypes
void createFile();
void addRecord();
void deleteRecord(int rollNumber);
void modifyMarks();
void displayAllRecords();  // New function

int main() {
    int choice;
    do {
        printf("\n1. Create File\n");
        printf("2. Add Record\n");
        printf("3. Delete Record\n");
        printf("4. Modify Marks\n");
        printf("5. Display All Records\n");  // New option
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createFile();
                break;
            case 2:
                addRecord();
                break;
            case 3: {
                int rollToDelete;
                printf("Enter Roll Number to Delete: ");
                scanf("%d", &rollToDelete);
                deleteRecord(rollToDelete);
                break;
            }
            case 4:
                modifyMarks();
                break;
            case 5:
                displayAllRecords();
                break;
            case 6:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 6);

    return 0;
}

void createFile() {
    FILE *file = fopen(FILENAME, "wb");

    if (file == NULL) {
        printf("Error creating file.\n");
        exit(1);
    }

    printf("File created successfully.\n");

    fclose(file);
}

void addRecord() {
    FILE *file = fopen(FILENAME, "ab");

    if (file == NULL) {
        printf("Error opening file for appending.\n");
        exit(1);
    }

    struct Student student;

    printf("Enter Student Name: ");
    scanf(" %[^\n]", student.name);

    printf("Enter Roll Number: ");
    scanf("%d", &student.roll);

    printf("Enter Marks: ");
    scanf("%f", &student.marks);

    printf("Enter Date of Birth (DD-MM-YYYY): ");
    scanf("%s", student.dob);

    fwrite(&student, sizeof(struct Student), 1, file);

    printf("Record added successfully.\n");

    fclose(file);
}

void deleteRecord(int rollNumber) {
    FILE *tempFile = fopen("temp.dat", "wb");
    FILE *file = fopen(FILENAME, "rb");

    if (file == NULL || tempFile == NULL) {
        printf("Error opening files.\n");
        exit(1);
    }

    struct Student student;

    while (fread(&student, sizeof(struct Student), 1, file) == 1) {
        if (student.roll != rollNumber) {
            fwrite(&student, sizeof(struct Student), 1, tempFile);
        }
    }

    fclose(file);
    fclose(tempFile);

    remove(FILENAME);
    rename("temp.dat", FILENAME);

    printf("Record deleted successfully.\n");
}

void modifyMarks() {
    FILE *file = fopen(FILENAME, "rb+");
    
    if (file == NULL) {
        printf("Error opening file for reading and writing.\n");
        exit(1);
    }

    struct Student student;

    while (fread(&student, sizeof(struct Student), 1, file) == 1) {
        if (student.marks > 40.0 && student.marks < 50.0) {
            student.marks += 10.0;
            fseek(file, -sizeof(struct Student), SEEK_CUR);
            fwrite(&student, sizeof(struct Student), 1, file);
        }
    }

    fclose(file);

    printf("Marks modified successfully.\n");
}

void displayAllRecords() {
    FILE *file = fopen(FILENAME, "rb");

    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return;
    }

    struct Student student;

    printf("\nAll Student Records:\n");

    while (fread(&student, sizeof(struct Student), 1, file) == 1) {
        printf("Name: %s\n", student.name);
        printf("Roll Number: %d\n", student.roll);
        printf("Marks: %.2f\n", student.marks);
        printf("Date of Birth: %s\n", student.dob);
        printf("----------------------\n");
    }

    fclose(file);
}
