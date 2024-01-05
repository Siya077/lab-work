#include <stdio.h>
#include <stdlib.h>

// function prototype
void read_write_file();

int main() {
    // call the function
    read_write_file();

    return 0;
}

void read_write_file() {
    int n, i;
    FILE *file;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    // allocate memory for the array
    int *ptr = (int *) malloc(n * sizeof(int));
    if (ptr == NULL) {
        printf("Error! unable to use malloc.\n");
        exit(0);
    }

    // read data from the user
    for (i = 0; i < n; i++) {
        printf("Enter mark of student %d: ", i + 1);
        scanf("%d", &ptr[i]);
    }

    // open a file for writing
    file = fopen("marks.txt", "w");
    if (file == NULL) {
        printf("Error! unable to open the file for writing.\n");
        exit(0);
    }

    // write the data to the file
    for (i = 0; i < n; i++) {
        fprintf(file, "%d\n", ptr[i]);
    }

    // close the file
    fclose(file);

    // open a file for reading
    file = fopen("marks.txt", "r");
    if (file == NULL) {
        printf("Error! unable to open the file for reading.\n");
        exit(0);
    }

    // read the data from the file
    for (i = 0; i < n; i++) {
        fscanf(file, "%d\n", &ptr[i]);
        printf("Mark of student %d: %d\n", i + 1, ptr[i]);
    }

    // close the file
    fclose(file);

    // using free
    free(ptr);
}
