#include <stdio.h>
#include <string.h>

// Define the Employee structure
struct Employee {
    char first_name[50];
    char last_name[50];
    double monthly_salary;
};

// Function to initialize the Employee fields
void emp_init(struct Employee *e, const char *first_name, const char *last_name, double salary) {
    strcpy(e->first_name, first_name);
    strcpy(e->last_name, last_name);
    e->monthly_salary = salary;
}

// Function to set the salary of an Employee
void set_salary(struct Employee *e, double salary) {
    e->monthly_salary = salary;
}

// Function to display the Employee details
void emp_display(struct Employee *e) {
    printf("Employee: %s %s\n", e->first_name, e->last_name);
    printf("Monthly Salary: $%.2f\n", e->monthly_salary);
    printf("Yearly Salary: $%.2f\n", e->monthly_salary * 12);
    printf("\n");
}

// Function to give a 10% raise to an Employee
void give_raise(struct Employee *e) {
    e->monthly_salary *= 1.10; // Increase salary by 10%
}

int main() {
    // Create two Employee objects
    struct Employee emp1, emp2;

    // Initialize the Employee objects
    emp_init(&emp1, "John", "Doe", 3000.0);
    emp_init(&emp2, "Jane", "Smith", 4000.0);

    // Display the initial yearly salaries
    printf("Initial Employee Details:\n");
    emp_display(&emp1);
    emp_display(&emp2);

    // Give each Employee a 10% raise
    give_raise(&emp1);
    give_raise(&emp2);

    // Display the updated yearly salaries after the raise
    printf("Employee Details After 10%% Raise:\n");
    emp_display(&emp1);
    emp_display(&emp2);

    return 0;
}
