#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct{
    char name[50];
    int rollNumber;
    int marks[5];
    double totalMarks;
    double averageMarks;
}Student;

int calulateMarks(Student *student){
    int total = 0;
    for(int i = 0 ; i < 5 ; i++){
        total += (*student).marks[i];
    }

    return total;
}

// fucntion for read student data from the file
void readStudentData(FILE *file, Student *students, int noOfStudent){
    for (int i = 0; i < noOfStudent; i++) {
        fscanf(file, "%[^,],%d,%d,%d,%d,%d,%d",
               students[i].name,
               &students[i].rollNumber,
               &students[i].marks[0],
               &students[i].marks[1],
               &students[i].marks[2],
               &students[i].marks[3],
               &students[i].marks[4]);
    }
}

void sortingStudent(Student *students , int noOfStudent){
    for(int i = 0 ; i < noOfStudent - 1; i++){
        int imin;
        for(int j = i+1; j < noOfStudent ; j++){
            imin = students[i].totalMarks;
            if(imin > students[j].totalMarks){
                imin = j;
                Student temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}


int main(){
    FILE *file = fopen("hacked.txt", "r");
    if(file == NULL){
        printf("Error Opening File\n");
        return 1;
    }else{
        int noOfStudent = 10;
        Student students[noOfStudent];
        readStudentData(file,students,noOfStudent); 

        for(int i = 0 ; i < noOfStudent; i++){
            students[i].totalMarks = calulateMarks(&students[i]);
            students[i].averageMarks = students[i].totalMarks / 5;
        }


        printf("\nBefore Sorting\n");
        for(int i = 0 ; i < noOfStudent; i++){
            printf("\n%s's total Marks is: %.2f and Average Marks: %.2f",students[i].name, students[i].totalMarks,students[i].averageMarks);
            
        }
        sortingStudent(students,noOfStudent);
        printf("\n\nAfter Sorting\n");
        for(int i = 0 ; i < noOfStudent; i++){
            printf("\n%s's total Marks is: %.2f and Average Marks: %.2f",students[i].name, students[i].totalMarks,students[i].averageMarks);
            
        }
         
    }


    fclose(file);
    return 0;
}