#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 10
#define NAME_LENGTH 50

// Comparison function for qsort
int compareStrings(const void *a, const void *b) {
    return strcmp((const char *)a, (const char *)b);
}

int main() {
    char nameOfStudents[MAX_STUDENTS][NAME_LENGTH];
    int numStudents = 0;

    // Read student names
    printf("Enter up to %d student names (press Enter after each name):\n", MAX_STUDENTS);
    while (numStudents < MAX_STUDENTS && fgets(nameOfStudents[numStudents], NAME_LENGTH, stdin)) {
        // Remove the newline character at the end of the input
        nameOfStudents[numStudents][strcspn(nameOfStudents[numStudents], "\n")] = '\0';
        
        // Check if the user entered an empty string to stop input
        if (strlen(nameOfStudents[numStudents]) == 0) {
            break;
        }

        numStudents++;
    }

    // Sort the array of names
    qsort(nameOfStudents, numStudents, NAME_LENGTH, compareStrings);

    // Display the sorted names
    printf("\nSorted student names:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("%s\n", nameOfStudents[i]);
    }

    return 0;
}
