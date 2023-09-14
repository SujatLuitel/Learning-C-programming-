#include <stdio.h>

int main() {
    char ch;

    // Get the character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Convert the character to upper or lower case
    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + ('a' - 'A');
    } else if (ch >= 'a' && ch <= 'z') {
        ch = ch - ('a' - 'A');
    }

    // Display the converted character
    printf("Converted character: %c\n", ch);

    return 0;
}

