#include <stdio.h>
#include <ctype.h>  // For character functions

int main() {
    char ch;

    // Input character from user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check character type
    if (isupper(ch)) {
        printf("'%c' is an UPPERCASE letter.\n", ch);
    } 
    else if (islower(ch)) {
        printf("'%c' is a LOWERCASE letter.\n", ch);
    } 
    else if (isdigit(ch)) {
        printf("'%c' is a DIGIT.\n", ch);
    } 
    else {
        printf("'%c' is a SPECIAL CHARACTER or SYMBOL.\n", ch);
    }

    return 0;
}

