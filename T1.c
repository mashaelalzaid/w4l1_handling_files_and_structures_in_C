#include <stdio.h>
#include <string.h>
typedef struct Student {
    int id;
    char name[50];
    float gpa;
} Student;



int main() {
    //initialize file
    FILE *fptr = fopen("studentsFile.txt", "w");
    if (fptr==NULL){
        printf("file doesn't exist");
    return 1;
    }

    
    printf("Enter the number of students: ");
    int size;
    scanf("%d", &size);
    

    Student students[size];
    for (int i=0; i<size; i++){
    printf("Enter sutdent %d ifno\n", i+1);
    //Entering data 
        printf("Enter student ID: ");
        scanf("%d", &students[i].id);

        printf("Enter student name: ");
        scanf(" %s", students[i].name);  

        printf("Enter student GPA: ");
        scanf("%f", &students[i].gpa);

        // Write each student's data to the file
        fwrite(&students[i], sizeof(Student), 1, fptr);

}

     // Closing the file
     fclose(fptr);
     printf(
            "Data successfully written into file\n");
     for (int n = 0; n < size; ++n) {
        printf("Sutdent %d ifno\n", n+1);
        fread(&students, sizeof(Student), 1, fptr);
        printf("Student ID: %d\n",students[n].id);
        printf("Student Name: %s\n",students[n].name);
        printf("Student GPA: %f\n",students[n].gpa);
    }


return 0; 

}

