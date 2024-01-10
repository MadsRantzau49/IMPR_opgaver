#include <stdio.h>
#include <stdlib.h>

// Definition af struct til at repræsentere en studerende
struct Student {
    char name[50];
    int id;
    float average;
};

// Funktion til at initialisere en studerende ved brug af pointere
void initializeStudent(struct Student* student) {
    printf("Enter student name: ");
    scanf("%s", student->name);

    printf("Enter student ID: ");
    scanf("%d", &(student->id));

    printf("Enter student average: ");
    scanf("%f", &(student->average));
}

// Funktion til at udskrive information om en studerende
void printStudentInfo(const struct Student* student) {
    printf("Student Name: %s\n", student->name);
    printf("Student ID: %d\n", student->id);
    printf("Student Average: %.2f\n", student->average);
}

int main() {
    int numStudents;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    // Alloker plads til et array af studerende ved brug af malloc
    struct Student* students = (struct Student*)malloc(numStudents * sizeof(struct Student));

    // Indtast data for hver studerende ved brug af initializeStudent
    for (int i = 0; i < numStudents; ++i) {
        printf("\nEnter information for Student %d:\n", i + 1);
        initializeStudent(&students[i]);
    }

    // Udskriv information for hver studerende ved brug af printStudentInfo
    printf("\nStudent Information:\n");
    for (int i = 0; i < numStudents; ++i) {
        printf("\nStudent %d:\n", i + 1);
        printStudentInfo(&students[i]);
    }

    // Frigør den allokerede hukommelse
    free(students);

    return 0;
}
