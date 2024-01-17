//Palindrome

#include <stdio.h>
#include <string.h>

// Function to check if a string is a palindrome
int is_palindrome(char *str) {
    int i, j;
    for (i = 0, j = strlen(str) - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            return 0; // false (the string is not a palindrome)
        }
    }
    return 1; // true (the string is a palindrome)
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // remove newline character

    if (is_palindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}