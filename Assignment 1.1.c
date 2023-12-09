#include <stdio.h>
#include <stdbool.h>

bool isWhitespace(char c) {
    return (c == ' ' || c == '\t' || c == '\n' || c == '\r');
}

int countWords(char *str) {
    int count = 0;
    bool inWord = false;

    while (*str) {
        if (isWhitespace(*str)) {
            if (inWord) {
                count++;
                inWord = false;
            }
        } else {
            inWord = true;
        }

        str++;
    }

    if (inWord) {
        count++;
    }

    return count;
}

int main() {
    char inputString[100];

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    int wordCount = countWords(inputString);

    printf("Number of words in the string: %d\n", wordCount);

    return 0;
}
