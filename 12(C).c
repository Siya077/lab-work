#include <stdio.h>
#include <stdlib.h>

// define the structure of student
typedef struct {
    int id;
    char name[50];
    int subject1, subject2, subject3, subject4, subject5;
} Student;

// function prototype
void getData(Student *);
void displayData(Student *);
int getTotalMarks(Student *);

int main() {
    int i, n;

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
        getData(&ptr[i]);
    }

    // display the student details and calculate the total marks
    for (i = 0; i < n; i++) {
        displayData(&ptr[i]);
        printf("Total Marks: %d\n", getTotalMarks(&ptr[i]));
    }

    // using free
    free(ptr);

    return 0;
}

void getData(Student *ptr) {
    printf("\nEnter the details of student %d\n", ptr->id);
    printf("ID: ");
    scanf("%d", &ptr->id);
    printf("Name: ");
    scanf("%s", ptr->name);
    printf("Subject1 Marks: ");
    scanf("%d", &ptr->subject1);
    printf("Subject2 Marks: ");
    scanf("%d", &ptr->subject2);
    printf("Subject3 Marks: ");
    scanf("%d", &ptr->subject3);
    printf("Subject4 Marks: ");
    scanf("%d", &ptr->subject4);
    printf("Subject5 Marks: ");
    scanf("%d", &ptr->subject5);
}

void displayData(Student *ptr) {
    printf("\nDetails of student %d\n", ptr->id);
    printf("ID: %d\n", ptr->id);
    printf("Name: %s\n", ptr->name);
    printf("Subject1 Marks: %d\n", ptr->subject1);
    printf("Subject2 Marks: %d\n", ptr->subject2);
    printf("Subject3 Marks: %d\n", ptr->subject3);
    printf("Subject4 Marks: %d\n", ptr->subject4);
    printf("Subject5 Marks: %d\n", ptr->subject5);
}

int getTotalMarks(Student *ptr) {
    return ptr->subject1 + ptr->subject2 + ptr->subject3 + ptr->subject4 + ptr->subject5;
}
