// C program to reverse a string 
// using recursion
# include <stdio.h>
 
void printReverse(char str[]) {
    //  if the string is empty or has only one character
    if (str[0] == '\0') {
        return;
    }

    // print the reverse of the string
    printReverse(str + 1);

    // Print the current character
    printf("%c", str[0]);
}

int main() {
    char input[100];

    // Get input from the user
    printf("Enter a string: ");
    scanf("%s", input);

    // Call the function to print the reverse of the string
    printf("Reverse of the string: ");
    printReverse(input);

    return 0;
}
