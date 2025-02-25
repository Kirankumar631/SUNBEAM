#include <stdio.h>
#include <string.h>

// Function to reverse a string
void reverseString(char str[]) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    // Swap characters from start and end until the middle is reached
    while (start < end) {
        // Swap str[start] and str[end]
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move towards the middle
        start++;
        end--;
    }
}

int main() {
    char str[100];

    // Input a string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character added by fgets
    str[strcspn(str, "\n")] = '\0';

    // Reverse the string
    reverseString(str);

    // Output the reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}
