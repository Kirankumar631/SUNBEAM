#include <stdio.h>

int main() {
    int marks[5], total = 0;
    float average;
    char grade;

    // Input marks for 5 subjects
    printf("Enter marks for 5 subjects (out of 100):\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);

        // Validate input (marks should be between 0 and 100)
        if (marks[i] < 0 || marks[i] > 100) {
            printf("Invalid marks entered! Please enter values between 0 and 100.\n");
            return 1;
        }

        total += marks[i];  // Sum up marks
    }

    average = total / 5.0; // Calculate average

    // Assign grade based on average marks
    if (average >= 90)
        grade = 'E'; // Ex (Excellent)
    else if (average >= 80)
        grade = 'A';
    else if (average >= 70)
        grade = 'B';
    else if (average >= 60)
        grade = 'C';
    else
        grade = 'F'; // Fail

    // Display results
    printf("\nTotal Marks: %d/500\n", total);
    printf("Average Marks: %.2f\n", average);
    printf("Grade: %c\n", grade);

    return 0;
}

