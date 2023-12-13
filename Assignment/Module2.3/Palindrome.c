#include <stdio.h>
#include <string.h>

// Function to reverse a string
void reverseString(char str[]) {
    int length = strlen(str);
    int i, j;

    for (i = 0, j = length - 1; i < j; i++, j--) {
        // Swap characters 
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

// Function to check if a string is a palindrome
int isPalindrome(char str[]) {
    int length = strlen(str);
    int i, j;

    for (i = 0, j = length - 1; i < j; i++, j--) {
        // If characters are not equal, it's not a palindrome
        if (str[i] != str[j]) {
            return 0; 
        }
    }
    return 1; // It's a palindrome
}

int main() {
    char input[100];

    // Get input from the user
    printf("Enter a string: ");
    scanf("%s", input);

    // Reverse the string
    reverseString(input);

    // Print the reversed string
    printf("Reversed string: %s\n", input);

    // Check if the original string is a palindrome
    if (isPalindrome(input)) {
        printf("The original string is a palindrome.\n");
    } else {
        printf("The original string is not a palindrome.\n");
    }

    return 0;
}

