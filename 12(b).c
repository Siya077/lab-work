#include <stdio.h>
#include <stdlib.h>

// define the structure of student
typedef struct {
    int id;
    char name[50];
    union {
        int total;
        struct {
            int subject1, subject2, subject3, subject4, subject5;
        } subjects;
    } marks;
} Student;

int main() {
    int i, j, n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    // dynamically allocate memory using malloc
    Student *ptr = (Student *) malloc(n * sizeof(Student));
    if (ptr == NULL) {
        printf("Error! unable to use malloc.\n");
        exit(0);
    }

    // input the student details
    for (i = 0; i < n; i++) {
        printf("\nEnter the details of student %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &ptr[i].id);
        printf("Name: ");
        scanf("%s", ptr[i].name);
        printf("Total Marks: ");
        scanf("%d", &ptr[i].marks.total);
        // OR if you want to input marks separately
        // printf("Subject1 Marks: ");
        // scanf("%d", &ptr[i].marks.subjects.subject1);
        // printf("Subject2 Marks: ");
        // scanf("%d", &ptr[i].marks.subjects.subject2);
        // printf("Subject3 Marks: ");
        // scanf("%d", &ptr[i].marks.subjects.subject3);
        // printf("Subject4 Marks: ");
        // scanf("%d", &ptr[i].marks.subjects.subject4);
        // printf("Subject5 Marks: ");
        // scanf("%d", &ptr[i].marks.subjects.subject5);
    }

    // print the student details and calculate the total marks
    for (i = 0; i < n; i++) {
        printf("\nDetails of student %d\n", i + 1);
        printf("ID: %d\n", ptr[i].id);
        printf("Name: %s\n", ptr[i].name);
        printf("Total Marks: %d\n", ptr[i].marks.total);
        // printf("Subject1 Marks: %d\n", ptr[i].marks.subjects.subject1);
        // printf("Subject2 Marks: %d\n", ptr[i].marks.subjects.subject2);
        // printf("Subject3 Marks: %d\n", ptr[i].marks.subjects.subject3);
        // printf("Subject4 Marks: %d\n", ptr[i].marks.subjects.subject4);
        // printf("Subject5 Marks: %d\n", ptr[i].marks.subjects.subject5);
    }

    // using free
    free(ptr);

    return 0;
}
