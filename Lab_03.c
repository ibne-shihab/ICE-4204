#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) {
        if (str[start] != str[end])
            return 0;  // Not a palindrome
        start++;
        end--;
    }
    return 1;  // It's a palindrome
}

int main() {
    char input[100];

    printf("Enter a string or number: ");
    scanf("%s", input);

    // Optional: convert to lowercase for case-insensitive comparison
    for (int i = 0; input[i]; i++) {
        input[i] = tolower(input[i]);
    }

    if (isPalindrome(input)) {
        printf("'%s' is a palindrome.\n", input);
    } else {
        printf("'%s' is not a palindrome.\n", input);
    }

    return 0;
}
