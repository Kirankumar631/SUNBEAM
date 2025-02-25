#include <stdio.h>
#include <string.h>

int main() {
    // Declare and initialize an array of strings
    char *strings[] = {
        "apple",
        "banana",
        "apple",
        "orange",
        "grape",
        "banana",
        "kiwi",
        "orange"
    };

    int size = sizeof(strings) / sizeof(strings[0]); // Calculate the number of strings

    // Array to keep track of duplicates
    int isDuplicate[size];
    for (int i = 0; i < size; i++) {
        isDuplicate[i] = 0; // Initialize all elements to 0 (not duplicate)
    }

    // Find and display duplicate strings
    printf("Duplicate strings in the array:\n");
    for (int i = 0; i < size - 1; i++) {
        if (!isDuplicate[i]) { // Skip if already marked as duplicate
            for (int j = i + 1; j < size; j++) {
                if (strcmp(strings[i], strings[j]) == 0) { // Compare strings
                    isDuplicate[j] = 1; // Mark as duplicate
                    if (!isDuplicate[i]) {
                        printf("%s\n", strings[i]); // Print the duplicate string
                        isDuplicate[i] = 1; // Mark as duplicate to avoid printing again
                    }
                }
            }
        }
    }

    return 0;
}
